#include <stdio.h>
/*
* 1.Напиши програма која внесува 10 цели броеви и и ги доделува на функцијата paren која враќа 1 ако бројот е парен и 0 ако бројот не е парен.

int main()
{
	int celBroj;
	for (celBroj = 1;celBroj <= 10;celBroj++)
	{
		printf("%d - %d\n", celBroj, paren(celBroj));
	}
}

paren(int x)
{
	if (x % 2 == 0)
	{
		return 1;
	}
	else return 0;
}
*/

/*
* 2.Напиши програма која на функцијата vreme и доделува три целобројни аргументи, час, минута и секунда и како резултат го враќа бројот на секунди до 12 часот. Имено, ако е 11 часот 59 минути и 58 секунди, тогаш има уште 2 секунди до 12 часот.

int main()
{
	int hh, mm, ss;
	printf("Vnesete vreme vo sledniot format hh-mm-ss:\n");
    scanf_s("%d%*c%d%*c%d", &hh, &mm, &ss);

	printf("Ostanuvaat %d sekundi do 12 casot.", vreme(hh, mm, ss));

}

int vreme(int cas, int minuti, int sekundi)
{
	int vkupno;
	int secondsLeft;
	vkupno = cas * 3600 + minuti * 60 + sekundi;
	if (vkupno > 12 * 3600)
	{
		secondsLeft = 12 * 3600;
		vkupno -= 12 * 3600;
		vkupno = 12 * 3600 - vkupno;
		secondsLeft += vkupno;
	}
	else
	{
		secondsLeft = 12 * 3600 - vkupno;
	}
	return secondsLeft;
}
*/

/*
* 3.Напиши програма која на функцијата obratno и доделува цел број. Оваа функција го враќа бројот напишан со обратни цифри, т.е. ако сме ја повикале функцијата со параметарот 1243, треба да врати 3421.

int main()
{
	int number;
	printf("Vnesi povekjecifren broj: \n");
	scanf_s("%d", &number);

	printf("Brojot %d obratno napisan e %d.\n", number, obratno(number));
}

int obratno(int broj)
{
	int reverse = 0;

	while (broj != 0)
	{
		reverse = (broj % 10) + reverse*10;
		broj /= 10;
	}
	return reverse;
}
*/

/*
* 4.Напиши програма во која дефинираш функција nzd за пресметување на најголемиот заеднички делител на два броја.

int main()
{
	int x, y;
	printf("Vnesi 2 broja:\n");
	scanf_s("%d %d", &x, &y);

	printf("Najgolem zaednicki delitel na vnesenite broevi e %d.\n", nzd(x, y));
}
int nzd(x, y)
{
	int counter,nzd;
	for (counter = 1; counter <= x && counter <= y; ++counter)
	{
		if (x % counter == 0 && y % counter == 0)
			nzd = counter;
	}
	return nzd;
}
*/

/*
* 5.Напиши итеративна верзија на функцијата за фибоначиеви броеви.

int main()
{
	int broj;
	printf("Vnesi broj: \n");
	scanf_s("%d", &broj);

	printf("Fibonacci(%d) = %ld", broj, fibonacci(broj));
}
int fibonacci(number)
{
	int i=number;
	long sum1, sum2,sum3;
	sum1 = 0;
	sum2 = 1;
	sum3 = 0;

	for (i = number;i > 1;i--)
	{
		sum3 = sum1+sum2;
		sum1 = sum2;
		sum2 = sum3;
	}


    return sum3;
}
*/

/*
* 6.Напиши рекурзивна верзија на функцијата за пресметување најголем заеднички делител.

int main()
{
	int x, y;
	printf("Vnesi 2 broja:\n");
	scanf_s("%d %d", &x, &y);

	printf("Najgolem zaednicki delitel na vnesenite broevi e %d.\n", nzd(x, y));
}

int nzd(x, y)
{
	if (y != 0)
		return nzd(y, x % y);
	else
		return x;
}
*/

/*
* 7.Напиши рекурзивна верзија на програма која за внесено n повикува функција dzvezdi со параметар n која во зависност од n испечатува ѕвезди на следниот начин:
	Vnesi broj na dzvezdi (n): 5
		Se dobiva:
		*****
		****
		***
		**
		* 
*/ 

/*
#include <string.h>
int main()
{
	int n;
	printf("Vnesi broj na dzvezdi (n): ");
	scanf_s("%d", &n);

	dzvezdi(n);
}
int dzvezdi(int n)
{
	int i;
	if (n == 0)
	{
		return 0;
	}
	else
	{
		for (i = 0;i < n;i++)
		{
			printf( "%c", '*');
		}
		printf("\n");
	}
	return dzvezdi(n - 1);
}
*/
