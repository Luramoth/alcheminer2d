//
// Created by kayla on 6/24/23.
//
#include "App.h"

int App::StartApp() {
	InitWindow(WIDTH, HEIGHT, "Alcheminer");

	hiSprite.LoadAsset("DEBUG_placeholder.png");

	return 0;
}

int App::UpdateLoop() { // NOLINT(*-make-member-function-const)
	while (!WindowShouldClose()) {
		BeginDrawing();

			ClearBackground(RAYWHITE);

			DrawTexture(hiSprite.texture, 0, 0, WHITE);

		EndDrawing();
	}

	return 0;
}

int App::Cleanup() {

	CloseWindow();

	hiSprite.UnLoadAsset();

	return 0;
}