#include "TenArabic.h"

void TenArabic::Interpret(Context & input)
{
	count = input.getInput();
	while (count > 0)
		if (count > 0 && count < 4)
		{
			count--;
			input.setOutput("I");
		}
		else if (count >= 5 && count < 9)
		{
			input.setOutput("V");
			count -= 5;
		}
		else if (count == 4)
		{
			input.setOutput("IV");
			count -= 4;
		}
		else if (count == 9)
		{
			input.setOutput("IX");
			count -= 9;
		}
}
