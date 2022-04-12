#include <iostream>
using namespace std;
#include "dropki.h"


int nzdFunkcija(int x, int y)
{
    int nzd=1;
    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
            nzd = i;
    }
    return nzd;
};

void Dropki::sobiranjeDropki ()
{
        int x1, y1, x2, y2;
        Dropki p1, p2;
        p1.setDropki();
        x1 = p1.broitel;
        y1 = p1.imenitel;
        p2.setDropki();
        x2 = p2.broitel;
        y2 = p2.imenitel;

        if (y1 == 0 || y2 == 0) 
        {
            cout << "Ne moze da ima 0 imenitel!";
            exit(0);
        }
        int nzs = (y1 * y2) / nzdFunkcija(y1, y2);
        int zbir = (x1 * nzs / y1) + (x2 * nzs / y2);
        int norm = zbir / nzdFunkcija(zbir, nzs); //reduciranje
        nzs = nzs / nzdFunkcija(zbir, nzs);

        //printing output
        cout << x1 << "/" << y1 << " + " << x2 << "/" << y2 << " = " << norm << "/" << nzs << " (" << (float)norm / nzs<<")";
}
void Dropki::odzemanjeDropki()
{
        int x1, y1, x2, y2;
        Dropki p1, p2;
        p1.setDropki();
        x1 = p1.broitel;
        y1 = p1.imenitel;
        p2.setDropki();
        x2 = p2.broitel;
        y2 = p2.imenitel;

        if (y1 == 0 || y2 == 0)
        {
            cout << "Ne moze da ima 0 imenitel!";
            exit(0);
        }
        int nzs = (y1 * y2) / nzdFunkcija(y1, y2);
        int razlika = (x1 * nzs / y1) - (x2 * nzs / y2);
        int norm = razlika / nzdFunkcija(razlika, nzs); //reduciranje
        nzs = nzs / nzdFunkcija(razlika, nzs);
        cout << x1 << "/" << y1 << " - " << x2 << "/" << y2 << " = " << norm << "/" << nzs << " (" << (float)norm/nzs << ")";
}

void Dropki::mnozenjeDropki()
{
        int x1, y1, x2, y2;
        Dropki p1, p2;
        p1.setDropki();
        x1 = p1.broitel;
        y1 = p1.imenitel;
        p2.setDropki();
        x2 = p2.broitel;
        y2 = p2.imenitel;
        if (y1 == 0 || y2 == 0)
        {
            cout << "Ne moze da ima 0 imenitel!";
            exit(0);
        }
        int broiteli = x1 * x2;
        int imeniteli = y1 * y2;
        int broiteli2 = broiteli / nzdFunkcija(broiteli, imeniteli);
        int imeniteli2 = imeniteli / nzdFunkcija(broiteli,imeniteli); //reduciranje
        cout << x1 << "/" << y1 << " * " << x2 << "/" << y2 << " = " << broiteli2 << "/" << imeniteli2 << " (" << (float)broiteli / imeniteli << ")";
}

void Dropki::delenjeDropki()
{
        int x1, y1, x2, y2;
        Dropki p1, p2;
        p1.setDropki();
        x1 = p1.broitel;
        y1 = p1.imenitel;
        p2.setDropki();
        x2 = p2.broitel;
        y2 = p2.imenitel;
        if (y1 == 0 || y2 == 0)
        {
            cout << "Ne moze da ima 0 imenitel!";
            exit(0);
        }
        int broiteli = x1 * y2;
        int imeniteli = y1 * x2;
        int broiteli2 = broiteli / nzdFunkcija(broiteli, imeniteli);
        int imeniteli2 = imeniteli / nzdFunkcija(broiteli, imeniteli); //reduciranje
        cout << x1 << "/" << y1 << " * " << x2 << "/" << y2 << " = " << broiteli2 << "/" << imeniteli2 << " (" << (float)broiteli / imeniteli << ")";

}


