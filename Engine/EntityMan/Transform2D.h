//
// Created by kayla on 6/25/23.
//

#ifndef ALCHEMINER2D_TRANSFORM2D_H
#define ALCHEMINER2D_TRANSFORM2D_H

#include "CommonPCH.h"

struct transform2D {
	Vector2 GPosition;
	float GRotation;
	Vector2 GScale;
};

namespace EntityMan {

	class Transform2D {
		transform2D transform;
	};

} // EntityMan

#endif //ALCHEMINER2D_TRANSFORM2D_H
