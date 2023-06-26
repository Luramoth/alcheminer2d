//
// Created by kayla on 6/25/23.
//

#ifndef ALCHEMINER2D_ENTITY_H
#define ALCHEMINER2D_ENTITY_H

#include "ComponentMan/Component.h"

namespace EntityMan {

	class Entity {
	public:
		std::list<ComponentMan::Component> Components;
		virtual void Tick();
	};

}// EntityMan

#endif //ALCHEMINER2D_ENTITY_H
