#include <core.h>
#include <iostream>

int main() {
    SetConfigFlags(FLAG_MSAA_4X_HINT);

    InitWindow(800, 600, "test");

    Vector4 area = {100,100,100,35};
    Vector4 area2 = {10,10,100,35};
    Style style;

    float value = 20.0f;

    

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);


        GUI::drawButton(area, style, "test");
        GUI::drawSlider(area2, style, 100.0f, &value, true);
        DrawRectangle(0,500,100,35, WHITE);
        EndDrawing();
    }


    return 0;
}