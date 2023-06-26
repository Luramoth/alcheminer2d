//
// Created by kayla on 6/25/23.
//

#ifndef ALCHEMINER2D_COMPONENT_H
#define ALCHEMINER2D_COMPONENT_H

#include "EntityMan/Entity.h"

namespace ComponentMan {

	class Component {
	public:
		virtual void Update(EntityMan::Entity * parentEntity) = 0;
	};

} // ComponentMan

#endif //ALCHEMINER2D_COMPONENT_H
