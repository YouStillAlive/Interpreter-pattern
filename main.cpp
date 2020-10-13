#include "TenArabic.h"
#include "HundredArabic.h"
#include "ThousandArabic.h"
#include "TenExp.h"
#include "HundredExp.h"
#include "ThousandExp.h"
#include <iostream>
#include <vector>
int main()
{
	std::cout << "Please enter arabic or roman number - ";
	std::string  i;
	while (std::getline(std::cin, i))
	{
		if (atoi(i.c_str()) != 0)
		{
			std::vector<Expression*> tree;
			ThousandArabic *th = new ThousandArabic();
			tree.push_back(th);
			HundredArabic *h = new HundredArabic();
			tree.push_back(h);
			TenArabic *t = new TenArabic();
			tree.push_back(t);
			Context context(atoi(i.c_str()));

			for (Expression* exp : tree)
				exp->Interpret(context);

			std::cout << "Roman numeral = " << context.getOutput();
			delete h;
			delete th;
			delete t;
		}
		else if (atoi(i.c_str()) == 0)
		{
			Context context(i);
			TenExp *p = new TenExp();
			HundredExp *t = new HundredExp();
			ThousandExp *th = new ThousandExp();
			p->Interpret(context);
			t->Interpret(context);
			th->Interpret(context);
			std::cout << "Arabic numeral = " << context.getRomanOut();
			delete p;
			delete t;
			delete th;
		}
		std::cout << "\nPlease enter arabic or roman number - ";
	}
}