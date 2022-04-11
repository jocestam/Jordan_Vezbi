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

/*
* 3.1.	Напиши програм кој кој користи функциски урнек min за да го определи помалиот од двата аргументи. Тестирај го прогамот со цели броеви, реални броеви и карактери.

template < class T > 
T min(T value1, T value2)
{
    T min = value1;

    if (value2 < min)
        min = value2;

    return min;
}

int main()
{
    int int1, int2;

    cout << "Vnesi 2 celi broja: ";
    cin >> int1 >> int2;
    cout << "Pomal cel broj e: "<< min(int1, int2); 

    double double1, double2;

    cout << "\nVnesi 2 realni broevi: ";
    cin >> double1 >> double2;
    cout << "Pomal realen broj e: "<< min(double1, double2);

    char char1, char2, char3;

    cout << "\nVnesi 2 karakteri: ";
    cin >> char1 >> char2;
    cout << "Minimalniot karakter e: " << min(char1, char2) << endl;

    return 0;
} 
*/

