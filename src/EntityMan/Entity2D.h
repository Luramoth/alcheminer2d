//
// Created by kayla on 6/25/23.
//

#ifndef ALCHEMINER2D_ENTITY2D_H
#define ALCHEMINER2D_ENTITY2D_H

#include "Transform2D.h"
#include "ComponentMan/Component.h"

#include <Common.h>

namespace EntityMan {

	class Entity2D : Entity {
		Transform2D Transform;
		std::list<ComponentMan::Component> Components;
	};

} // EntityMan

#endif //ALCHEMINER2D_ENTITY2D_H
