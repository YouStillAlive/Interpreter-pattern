#pragma once
#include "Expression.h"

class TenArabic :public Expression
{
	int count = 0;
public:
	void Interpret(Context & input);
};