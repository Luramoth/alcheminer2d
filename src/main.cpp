#include <cstdio>

#include "app.h"

int main() {
	App app = App::getInstance();

	if (app.StartApp() > 0){
		fprintf(stderr, "Error starting app: %s", app.errMsg);
		return 1;
	}

	if (app.UpdateLoop() > 0){
		fprintf(stderr, "Error during runtime: %s", app.errMsg);
	}

	if (app.Cleanup() > 0){
		fprintf(stderr, "Error cleaning up: %s", app.errMsg);
		return 1;
	}

	return 0;
}