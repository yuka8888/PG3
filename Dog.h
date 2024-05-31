#pragma once
#include"Animal.h"
#include<stdio.h>

class Dog : public Animal
{
public:
	void MakeSound() override;
};

