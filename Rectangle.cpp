#include "Rectangle.h"

void Rectangle::Size()
{
	radius = 5.0f;
	printf("矩形の半径 %f\n", radius);
	size = radius * 2.0f * radius * 2.0f;
}

void Rectangle::Draw()
{
	printf("面積 %f\n", size);
}
