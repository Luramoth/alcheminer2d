//
// Created by kayla on 6/24/23.
//

#include "Sprite.h"

#include <iostream>

namespace AssetMan {

	int Sprite::LoadAsset(std::string relPath) {
		// concatenate relative path to a c-string
		std::string path = ASSETS + relPath;
		const char* cPath = path.c_str();

		std::cout << "Loading asset:" << cPath << std::endl;

		texture = LoadTexture(cPath);

		return 0;
	}

	int Sprite::UnLoadAsset() {

		UnloadTexture(texture);

		return 0;
	}

} // AssetMan