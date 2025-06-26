#include <raylib.h>

int main() {
    InitWindow(1000, 800, "Hill Clmb Racing");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
