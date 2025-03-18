#ifndef GUI_H
#define GUI_H

#include <raylib.h>
#include "vectors.h"
#include "types.h"
#include <string>

namespace GUI {
    // basic functions
    Action drawRectangle(Vector4 area, Style style, bool enableHoverChange);

    // normal functions
    Action drawButton(Vector4 area, Style style, std::string text);
    Action drawSlider(Vector4 area, Style style, float maxValue, float* value, bool showValue, float step);
    Action drawSlider(Vector4 area, Style style, float maxValue, float* value, bool showValue);

    // functions in a Inner
    


    namespace Inner {
        
    }


}


#endif