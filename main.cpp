#include <stdio.h>
#include "Ishape.h"
#include "Circle.h"
#include "Rectangle.h"

int main(void) {
	Ishape *ishape[2];
	ishape[0] = new Circle;
	ishape[1] = new Rectangle;

	ishape[0]->Size();
	ishape[1]->Size();

	ishape[0]->Draw();
	ishape[1]->Draw();

	delete ishape[0];
	delete ishape[1];
}
