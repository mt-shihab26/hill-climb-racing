#include "main.h"
#include <raylib.h>

int main() {
    InitWindow(1000, 800, "Hill Clmb Racing");

    SetTargetFPS(60);

    Car car = {
        .x = 300,
        .y = 300,
        .w = 250,
        .h = 100,
    };

    Wheel back_wheel = {
        .r = 25,
        .p = 10,
    };

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(WHITE);

        DrawRectangle(car.x, car.y, car.w, car.h, BLACK);
        DrawCircle(car.x + back_wheel.r + back_wheel.p,
                   car.y + car.h + back_wheel.r + back_wheel.p, back_wheel.r,
                   BLACK);
        DrawCircle(car.x + car.w - back_wheel.r - back_wheel.p,
                   car.y + car.h + back_wheel.r + back_wheel.p, back_wheel.r,
                   BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
