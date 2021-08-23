#include <iostream>
#include "asr.h"

using namespace std;

/*
	This file is just for testing purposes.
	When launching you should get a window with an image saying "HI".
	Deleting this file won't affect the functionality of the renderer.
	However make sure to include the asr.h header file in your cpp file.
*/

asr a;
vect2D v = { 0,0 };

void drawRed();
void drawBlue();

int main(int argc, char *argv[]) {

	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		cout << "SDL could not be initialized! SDL Error: " << SDL_GetError() << endl;
	}

	a.setResolution(1000, 500);
	a.setBlockSize(100);
	a.initialize();

	for (int i = 0; i < 10; i++) {
		drawRed();
	}

	a.nextLine(&v);

	drawRed();
	drawRed();

	drawBlue();

	drawRed();

	drawBlue();

	drawRed();
	drawRed();

	drawBlue();

	drawRed();
	drawRed();

	a.nextLine(&v);

	drawRed();
	drawRed();

	drawBlue();
	drawBlue();
	drawBlue();

	drawRed();
	drawRed();

	drawBlue();

	drawRed();
	drawRed();

	a.nextLine(&v);

	drawRed();
	drawRed();

	drawBlue();

	drawRed();

	drawBlue();

	drawRed();
	drawRed();

	drawBlue();

	drawRed();
	drawRed();

	a.nextLine(&v);

	for (int i = 0; i < 10; i++) {
		drawRed();
	}

	a.showRender(10000);

	a.quit();
	return EXIT_SUCCESS;

}

void drawBlue() {
	colorDim blue = colorDim(0, 0, 255, 0);
	int b = a.getBlockSize();
	a.draw(blue, v);
	v.x = v.x + b;
}

void drawRed() {
	colorDim red = colorDim(255, 0, 0, 0);
	int b = a.getBlockSize();
	a.draw(red, v);
	v.x = v.x + b;
}