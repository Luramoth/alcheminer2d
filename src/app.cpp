//
// Created by kayla on 6/24/23.
//
#include <raylib.h>

#include "app.h"

int App::StartApp() {
    InitWindow(WIDTH, HEIGHT, "Alcheminer");

    return 0;
}

int App::UpdateLoop() {
    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    return 0;
}

int App::Cleanup() {

    CloseWindow();

    return 0;
}