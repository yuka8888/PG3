#include <stdio.h>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main(void) {
	Animal* animal[2];

	//犬と猫のインスタンスを生成
	animal[0] = new Cat;
	animal[1] = new Dog;

	//それぞれなかせる
	animal[0]->MakeSound();
	animal[1]->MakeSound();

	//削除
	delete animal[0];
	delete animal[1];
}
