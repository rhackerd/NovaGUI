#include "gui.h"
#include <iostream>

Action GUI::drawButton(Vector4 area, Style style, std::string text) {
    Action ret = drawRectangle(area, style, true);

    int textWidth = MeasureText(text.c_str(), 20);
    int textX = area.x + (area.z - textWidth) / 2;
    int textY = area.y + (area.w - 20) / 2;

    DrawText(text.c_str(), textX, textY, 20, style.textColor);

    return ret;  // Return the action properly
}
