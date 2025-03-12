#include "gui.h"

Action GUI::drawButton(Vector4 area, Style style) {
    if (style.border.enabled) DrawRectangleRoundedLinesEx({area.x, area.y, area.w, area.h}, style.border.borderRadius, 0.2f, style.border.size, style.border.color);
    else DrawRectangle(area.x, area.y, area.w, area.h, );
}