#include "HundredExp.h"

void HundredExp::Interpret(Context & input)
{
	c = input.getRomanInput();
	for (size_t i = 0; i < c.length(); i++)
		if (c[i] == 'X' && i + 1 < c.length() && c[i + 1] == 'C')
		{
			input.setRomanOut(90);
			c = c.substr(i + 1);
		}
		else if (c[i] == 'X' && i + 1 < c.length() && c[i + 1] == 'L')
		{
			input.setRomanOut(40);
			c = c.substr(i + 1);
		}
		else if (c[i] == 'L')
			input.setRomanOut(50);
		else if (c[i] == 'X')
			input.setRomanOut(10);
	input.setRomanInput(c);
}
