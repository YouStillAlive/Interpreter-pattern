#include "HundredArabic.h"

void HundredArabic::Interpret(Context &input)
{
	count = input.getInput() / 10;
	while (count > 0 && count < 10)
		if (count > 0 && count < 4)
		{
			input.setOutput("X");
			count -= 1;
		}
		else if (count >= 5 && count < 9)
		{
			input.setOutput("L");
			count -= 5;
		}
		else if (count == 4)
		{
			input.setOutput("XL");
			count -= 4;
		}
		else if (count == 9)
		{
			input.setOutput("XC");
			count -= 9;
		}
	input.setInput(input.getInput() % 10);
}
