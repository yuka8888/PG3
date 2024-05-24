#include <stdio.h>

template <typename Type1, typename Type2>

class Math
{
public:
	Type1 num1 = 0;
	Type2 num2 = 0;

	Math(Type1 num1, Type2 num2) : num1(num1), num2(num2) {};

	Type1 Min();

};

template <typename Type1, typename Type2>

inline Type1 Math<Type1, Type2>::Min()
{
	if (num1 < num2) {
		return static_cast<Type1>(num1);
	}
	else {
		return static_cast<Type1>(num2);
	}
}


int main(void) {
	Math<int, int> mathInt(5, 19);
	Math<float, float> mathFloat(5.0f, 19.0f);
	Math<double, double> mathDouble(5.0, 19.0);
	Math<int, float> mathIntFloat(5, 19.0f);
	Math<int, double> mathIntDouble(5, 19.0);
	Math<float, double> mathFloatDouble(5.0f, 19.0);

	printf("int %d int %d min =  %d\n",mathInt.num1, mathInt.num2, mathInt.Min());
	printf("float %lf float %lf min =  %lf\n",mathFloat.num1, mathFloat.num2, mathFloat.Min());
	printf("double %f double %f min =  %f\n",mathDouble.num1, mathDouble.num2, mathDouble.Min());
	printf("int %d float %lf min =  %d\n",mathIntFloat.num1, mathIntFloat.num2, mathIntFloat.Min());
	printf("int %d double %f min =  %d\n",mathIntDouble.num1, mathIntDouble.num2, mathIntDouble.Min());
	printf("float %lf double %f min =  %lf\n",mathFloatDouble.num1, mathFloatDouble.num2, mathFloatDouble.Min());
}
