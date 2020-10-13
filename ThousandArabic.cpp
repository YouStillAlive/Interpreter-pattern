#include "ThousandArabic.h"

void ThousandArabic::Interpret(Context & input)
{
	count = input.getInput() / 100;
	while (count > 0 && count <= 39)
		if (count > 0 && count < 4)
		{
			input.setOutput("C");
			count -= 1;
		}
		else if (count >= 5 && count < 9)
		{
			input.setOutput("D");
			count -= 5;
		}
		else if (count == 4)
		{
			input.setOutput("CD");
			count -= 4;
		}
		else if (count == 9)
		{
			input.setOutput("CM");
			count -= 9;
		}
		else if (count > 9)
		{
			input.setOutput("M");
			count -= 10;
		}
	input.setInput(input.getInput() % 100);
}
