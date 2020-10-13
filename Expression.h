#pragma once
#include "Context.h"
class Expression abstract
{
public:
	virtual void Interpret(Context & input) abstract;
};