#include <iostream>
#ifndef DROPKI_H
#define DROPKI_H
using namespace std;

class Dropki
{

public:
	Dropki() {}
	/*Dropki(int x, int y)
	{
		broitel = x;
		if (y == 0)
		{
			cout << "Не се дели со 0." << endl;
			exit(0);
		}
		else
			imenitel = y;
	}*/
	int getbroitel() { return broitel; }
	int getimenitel() { return imenitel; }
	void setDropki() { cout << "Vnesi broitel: "; cin >> broitel; cout << "Vnesi imenitel: ";cin >> imenitel; };
	void sobiranjeDropki();
	void odzemanjeDropki();
	void mnozenjeDropki();
	void delenjeDropki();
private:
	int broitel, imenitel;
};

#endif
