//
// Created by kayla on 6/24/23.
//

#ifndef ALCHEMINER2D_ASSET_H
#define ALCHEMINER2D_ASSET_H

#include "CommonPCH.h"

namespace AssetMan {

	class Asset {
	public:
		virtual int LoadAsset(std::string relPath) = 0;

		virtual int UnLoadAsset() = 0;
	};

} // AssetMan

#endif //ALCHEMINER2D_ASSET_H