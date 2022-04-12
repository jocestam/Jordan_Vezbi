/*
#include <iostream>
using namespace std;

class Kvadar {
public:
	int getx() { return x; }
	int gety() { return y; }
	int getz() { return z; }
	void set() { cout << "dolzina=";cin >> x; cout << "sirina=";cin >> y; cout << "visina = ";cin >> z; }
	double Plostina() {return x * y;}
    double Volumen() {return x * y * z;}
	void pecatiObjekti() {cout << "Dolzina:"<< x << " - " << "Sirina:"<< y << " - " << "Visina:"<< z<< endl;}
private:
	int x, y, z;
};
void vnesiObjekti() 
{
	int n, i, p;
	Kvadar p1, * p2;
	Kvadar array[20];
	cout << "Kolku objekti sakate da vnesete ?";
	cin >> n;
	for (i = 0;i < n;i++) // For ciklus za vnesuvanje na n objekti vo niza.
	{
		p2 = new Kvadar;
		p2->set();
		array[i] = *p2;
		delete p2;

	}

	p = array[0].Plostina();

	for (i = 0;i < n;i++) //For ciklus za pecatenje na site objekti i presmetka na najmalata plostina.
	{
		array[i].pecatiObjekti();
		cout << "Plostinata e: " << array[i].Plostina() << endl;
		cout << "Volumeneot e: " << array[i].Volumen() << endl;
		if (array[i].getx() != array[i].gety()) //Ako ne e kocka da ja presmeta plostinata.
		{
			if (p > array[i].Plostina())
			{
				p = array[i].Plostina(); // Stavi ja pomalata plostina vo promenlivata p.
			}
		}
	}
	cout << "Najmalata plostina za objekt koj ne e kocka e: " << p << endl;

}

void main()
{
	vnesiObjekti();
}

*/

