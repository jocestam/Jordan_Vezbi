#include <iostream>
using namespace std;
#include "dropki.h"

int main()
{
	int n;
	Dropki p3;

	cout << "Vnesete 1 za sobiranje na 2 dropki. \nVnesete 2 za odzemanje na dve dropki.\nVnesete 3 za mnozenje na dve dropki.\nVnesete 4 za delenje na 2 dropki.\n"; cin >> n;
	if (n == 1)
	{
		p3.sobiranjeDropki();
	}
	else if (n == 2)
	{
		p3.odzemanjeDropki();
	}
	else if (n == 3)
	{
		p3.mnozenjeDropki();
	}
	else if (n == 4)
	{
		p3.delenjeDropki();
	}
	else
	{
		cout << "Vnesovte nepostoecka opcija.";
	}
	return 0;
}