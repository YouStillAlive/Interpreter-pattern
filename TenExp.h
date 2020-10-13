#pragma once
#include "Expression.h"

class TenExp :public Expression
{
	std::string c;
public:
	void Interpret(Context & input);
};