//
// Created by kayla on 6/25/23.
//
//// ENTITY: Base class for all objects that exist in-world.
////
//// all entities contain a list of components that describe
//// what the entity is and how each thread should handle
//// the entity individually
////
//// the Awake() function gets run by the main thread once a particular entity is instanced into a world
////
//// the Start() function gets run by the main thread once all entities in a scene are instanced
////
//// the Tick() function gets run by the physics thread every time a tick goes by, bound by the games global tickrate
////
//// the Frame() function gets run by the Render thread before the next frame is about to render, handy to run logic
//// that will actually change things visually on screen such as movement
////
//// the End() function gets run by the main thread once a particular entity is about to get deleted

#ifndef ALCHEMINER2D_ENTITY_H
#define ALCHEMINER2D_ENTITY_H

#include "ComponentMan/Component.h"

namespace EntityMan {

	class Entity {
	public:
		std::list<ComponentMan::Component> Components;

		virtual void Awake();
		virtual void Start();
		virtual void Tick();
		virtual void Frame();
		virtual void End();
	};

}// EntityMan

#endif //ALCHEMINER2D_ENTITY_H
