#pragma once
#include "Animal.h"
#include<stdio.h>

class Cat : public Animal
{
public:
	void MakeSound() override;
};

