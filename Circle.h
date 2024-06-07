#pragma once
#include "Ishape.h"
#include <stdio.h>

class Circle :
    public Ishape
{
public:
	void Size() override;
	void Draw() override;
};

