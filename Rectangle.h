#pragma once
#include "Ishape.h"
#include <stdio.h>
class Rectangle :
    public Ishape
{
public:
	void Size() override;
	void Draw() override;
};

