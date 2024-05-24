#pragma once
template <typename Type1, typename Type2>

class Math
{
public:
	Type1 num1 = 0;
	Type2 num2 = 0;

	Math(Type1 num1, Type2 num2) : num1(num1), num2(num2) {};

	Type1 Min();

};
