#pragma once
#include "Expression.h"

class HundredArabic :public Expression
{
	int count = 0;
public:
	void Interpret(Context & input);
};