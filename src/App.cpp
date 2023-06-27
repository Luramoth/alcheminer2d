/*
 Copyright (c) 2023. This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU Affero General Public License as published
 by the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Affero General Public License for more details.

 You should have received a copy of the GNU Affero General Public License
 along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

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