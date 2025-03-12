#ifndef TYPES_H
#define TYPES_H
#include <cstdint>
#include <raylib.h>


enum Action {
    HOVER,
    FOCUS,
    CLICK
};

struct Style {
    bool usePercentage = false;

    struct Background {
        Color color = WHITE;
        Color focusedColor = BLACK;
        Color hoveredColor = GRAY;
        uint8_t alpha = 255;
    } background;

    struct Border {
        int size;
        bool enabled = size ? true : false;
        Color color;
        Color topLeftColor;
        Color topRightColor;
        Color bottomLeftColor;
        Color bottomRightColor;

        float borderRadius;
        float topLeftRadius = borderRadius;
        float topRightRadius = borderRadius;
        float bottomLeftRadius = borderRadius;
        float bottomRightRadius = borderRadius;
    } border;
};


#endif