#include <iostream>

using std::cout;
using std::cin;
using std::endl;
/*
1.	Напиши С++ програм кој користи inline функција circleArea која бара влез од корисникот за радиус на круг, ја пресметува и ја печати површината на кругот.

inline double circleArea(const double r) { return r * r * 3.14; }

int main()
{
    double radius;

    cout << "Vnesi radius na krugot:  ";
    cin >> radius;
    cout << "Povrsinata na krugot so radius " << radius << " e " << circleArea(radius) << endl;
    return 0;
}
*/

/*
* 2.	Нaпиши С++ програм со две посебни функции кои едноставно ја триплираат вредноста на променливата count дефинирана во main. Овие функции се:
a.	Функцијата tripleCallByValue која предава копија од count, ја триплира нејзината вредност и ја враќа новата вредност
b.	Функцијата tripleCallByReference која ja предава count како референцен параметар, ја триплира самата променлива и ја враќа новата вредност на count

int main()
{
    int count = 5;
    int tripleCallByValue(int);
    void tripleCallByReference(int &);

    cout << "Triple-By value of count is: \n" << tripleCallByValue(count) << endl;
    cout << "Triple-By Reference of count is: " << endl;
    tripleCallByReference(count);
    cout << count << endl;

}

int tripleCallByValue(int a)
{
    return 3 * a;
}

void tripleCallByReference(int &cRef)
{
    cRef = 3*cRef;
}
*/