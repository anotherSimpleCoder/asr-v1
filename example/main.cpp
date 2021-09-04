#include <iostream>
#include <asr.h>

using namespace std;

int main() {
	asr* a = new asr();
	a->initialize();
	a->setResolution(300, 300);
	a->setBlockSize(100);
	colorDim c = colorDim(255, 255, 0, 1);
	vect2D v;
	v.x = 100;
	v.y = 100;
	
	a->draw(c, v);
	a->showRender(10000);
	return 0;
}
