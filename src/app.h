//
// Created by kayla on 6/24/23.
//

#ifndef ALCHEMINER2D_APP_H
#define ALCHEMINER2D_APP_H

#include <string>

#include <raylib.h>

class App {
public:
	const int WIDTH = 800;
	const int HEIGHT = 450;

	char errMsg[255];

	Texture2D hi;

	// singleton grabber function
	static App& getInstance() {
		static App instance;
		return instance;
	}

	[[nodiscard]] int StartApp();

	[[nodiscard]] int UpdateLoop ();

	[[nodiscard]] int Cleanup();

private:
	App() {}
};


#endif //ALCHEMINER2D_APP_H
