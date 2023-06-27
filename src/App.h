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

#ifndef ALCHEMINER2D_APP_H
#define ALCHEMINER2D_APP_H

#include <CommonPCH.h>

#include "AssetMan/Sprite.h"

class App {
public:
	const int WIDTH = 800;
	const int HEIGHT = 450;

	char errMsg[255];

	AssetMan::Sprite hiSprite;

	// singleton grabber function
	static App& getInstance() {
		static App instance;
		return instance;
	}

	[[nodiscard]] int StartApp();

	[[nodiscard]] int UpdateLoop();

	[[nodiscard]] int Cleanup();

private:
	App() {}
};


#endif //ALCHEMINER2D_APP_H
