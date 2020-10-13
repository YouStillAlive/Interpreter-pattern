#pragma once
#include "Expression.h"

class HundredExp :public Expression
{
	std::string c;
public:
	void Interpret(Context & input);
};