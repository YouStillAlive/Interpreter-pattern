#pragma once
#include "Expression.h"

class ThousandExp :public Expression 
{
	std::string c;
public:
	 void Interpret(Context & input);
};