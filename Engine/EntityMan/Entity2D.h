//
// Created by kayla on 6/25/23.
//

#ifndef ALCHEMINER2D_ENTITY2D_H
#define ALCHEMINER2D_ENTITY2D_H

#include "Transform2D.h"
#include "EntityMan/Entity.h"

#include "CommonPCH.h"

namespace EntityMan {

	class Entity2D : Entity {
	public:
		Transform2D Transform;
	};

} // EntityMan

#endif //ALCHEMINER2D_ENTITY2D_H
