//
// Created by kayla on 6/24/23.
//
#include "app.h"

int App::StartApp() {
	InitWindow(WIDTH, HEIGHT, "Alcheminer");

	hiSprite.LoadAsset("DEBUG_placeholder.png");

	return 0;
}

int App::UpdateLoop() {
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