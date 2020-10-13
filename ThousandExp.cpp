#include "ThousandExp.h"

void ThousandExp::Interpret(Context & input)
{
	c = input.getRomanInput();
	for (size_t i = 0; i < c.length(); i++)
		if (c[i] == 'C' && i + 1 < c.length() && c[i + 1] == 'M')
		{
			input.setRomanOut(900);
			c = c.substr(i + 1);
		}
		else if (c[i] == 'C' && i + 1 < c.length() && c[i + 1] == 'D')
		{
			input.setRomanOut(400);
			c = c.substr(i + 1);
		}
		else if (c[i] == 'D')
			input.setRomanOut(500);
		else if (c[i] == 'C')
			input.setRomanOut(100);
		else if (c[i] == 'M')
			input.setRomanOut(1000);
	input.setRomanInput(c);
}
