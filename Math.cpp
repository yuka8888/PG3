#include "Math.h"
template <typename Type1, typename Type2>

inline Type1 Math<Type1, Type2>::Min()
{
	if (num1 > num2) {
		return static_cast<Type1>(num1);
	}
	else {
		return static_cast<Type1>(num2);
	}
}
