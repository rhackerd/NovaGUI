#include <core.h>

int main() {
    InitWindow(800, 600, "test");

    Vector4 area = {0,0,100,35};
    Style style;


    while (!WindowShouldClose()) {
        GUI::drawButton(area, style);
    }


    return 0;
}