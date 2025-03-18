#include "gui.h"

Action GUI::drawRectangle(Vector4 area, Style style, bool enableHoverChange) {
    Action action = NONE;
    if (CheckCollisionPointRec(GetMousePosition(), {area.x, area.y, area.z, area.w})) {
        if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
            action = CLICK;
        } else {
            action = HOVER;  // This should be inside an "else" to avoid overwriting CLICK
        }
    }

    if (style.border.enabled) {
        Color finalBGColor = action ? style.background.color : style.background.hoveredColor;
        DrawRectangleRounded({area.x, area.y, area.z, area.w}, style.border.borderRadius, 10, style.border.color);
        DrawRectangleRounded({area.x + style.border.size, area.y + style.border.size, 
                              area.z - 2 * style.border.size, area.w - 2 * style.border.size}, 
                              style.border.borderRadius, 10, finalBGColor);
    } else {
        DrawRectangle(area.x, area.y, area.z, area.w, style.background.color);
    }

    return action;  // Missing return statement added
}
