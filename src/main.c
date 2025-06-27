#include <raylib.h>

int main() {
    InitWindow(1000, 800, "Hill Clmb Racing");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        DrawCircle(100, 100, 10, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
