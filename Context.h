#pragma once
#include <string>

class Context
{
	int input;
	std::string output;
	std::string RomanInput;
	int RomanOutput;
public:
	Context(int inp)
	{
		input = inp;
		output = "";
	}
	Context(std::string Rinp)
	{
		RomanInput = Rinp;
		RomanOutput = 0;
	}
	void setRomanInput(std::string Rinp)
	{
		RomanInput = Rinp;
	}
	std::string getRomanInput()
	{
		return RomanInput;
	}
	int getRomanOut()
	{
		return RomanOutput;
	}
	void setRomanOut(int inp)
	{
		RomanOutput += inp;
	}
	void setInput(int inp)
	{
		input = inp;
	}
	void setOutput(std::string out)
	{
		output += out;
	}
	std::string getOutput()
	{
		return output;
	}
	int getInput()
	{
		return input;
	}
};