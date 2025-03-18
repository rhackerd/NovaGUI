#ifndef TYPES_H
#define TYPES_H
#include <cstdint>
#include <raylib.h>


enum Action {
    HOVER,
    FOCUS,
    CLICK,
    NONE
};

struct Style {
    bool usePercentage = false;

    Color textColor = BLACK;

    struct Background {
        Color color = WHITE;
        Color focusedColor = BLACK;
        Color hoveredColor = GRAY;
        uint8_t alpha = 255;
    } background;

    struct Border {
        int size = 0.8f;
        bool enabled = size ? false : true;
        Color color = RED;
        Color topLeftColor;
        Color topRightColor;
        Color bottomLeftColor;
        Color bottomRightColor;

        float borderRadius = 0.5f;
        float topLeftRadius = borderRadius;
        float topRightRadius = borderRadius;
        float bottomLeftRadius = borderRadius;
        float bottomRightRadius = borderRadius;
    } border;
};

struct Inner {
    
};


#endif