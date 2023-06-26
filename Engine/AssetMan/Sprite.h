//
// Created by kayla on 6/24/23.
//

#ifndef ALCHEMINER2D_SPRITE_H
#define ALCHEMINER2D_SPRITE_H

#include "Asset.h"

namespace AssetMan {

	class Sprite : Asset {
	public:
		Texture2D texture;

		int LoadAsset(std::string relPath) override;

		int UnLoadAsset() override;
	};

} // AssetMan

#endif //ALCHEMINER2D_SPRITE_H
