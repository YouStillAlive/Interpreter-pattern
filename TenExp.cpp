#include "TenExp.h"

void TenExp::Interpret(Context & input)
{
	c = input.getRomanInput();
	for (size_t i = 0; i < c.length(); i++)
		if (c[i] == 'I' && i + 1 < c.length() && c[i + 1] == 'X')
		{
			input.setRomanOut(9);
			c = c.substr(2);
		}
		else if (c[i] == 'I' && i + 1 < c.length() && c[i + 1] == 'V')
		{
			input.setRomanOut(4);
			c = c.substr(2);
		}
		else if (c[i] == 'V')
			input.setRomanOut(5);
		else if (c[i] == 'I')
			input.setRomanOut(1);
	input.setRomanInput(c);
}