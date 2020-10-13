#pragma once
#include "Expression.h"

class ThousandArabic: public Expression
{
	int count = 0;
public:
	void Interpret(Context & input);
};