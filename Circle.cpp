#include "Circle.h"

void Circle::Size()
{
	radius = 5.0f;
	printf("円の半径 %f\n", radius);
	size = radius * radius * 3.14f;
}

void Circle::Draw()
{
	printf("面積 %f\n", size);
}
