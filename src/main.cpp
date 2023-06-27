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

#include <cstdio>

#include "App.h"

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