#include <raylib.h>

const int WIDTH = 800;
const int HEIGHT = 450;

int main() {
    InitWindow(WIDTH, HEIGHT, "Alcheminer");

    while (!WindowShouldClose()) {
        BeginDrawing();

            ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}