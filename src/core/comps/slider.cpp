#include "../novagui.h"
#include <cmath>

Action GUI::drawSlider(Vector4 area, Style style, float maxValue, float* value, bool showValue, float step) {
    // Draw slider track
    DrawRectangle(area.x, area.y + (area.w / 2) - 2, area.z, 5, WHITE);

    // Calculate knob position
    float sliderX = area.x + (*value / maxValue) * area.z;
    DrawCircle(sliderX, area.y + (area.w / 2), 7, WHITE);

    // Handle input
    if (CheckCollisionPointRec(GetMousePosition(), {area.x, area.y, area.z, area.w})) {
        if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
            *value = ((GetMousePosition().x - area.x) / area.z) * maxValue;
            *value = std::max(0.0f, std::min(*value, maxValue)); // Clamp to [0, maxValue]
            
            if (step > 0) {
                *value = round(*value / step) * step;  // Snap to step values
            }
        }
    }

    // Show value text if enabled
    if (showValue) {
        std::string valueText = std::to_string(*value);
        DrawText(valueText.c_str(), area.x + area.z + 10, area.y, 20, WHITE);
    }

    return NONE;
}





Action GUI::drawSlider(Vector4 area, Style style, float maxValue, float* value, bool showValue) {
    return drawSlider(area, style, maxValue, value, showValue, 1.0f);
}