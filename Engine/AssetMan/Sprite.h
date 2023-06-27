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
