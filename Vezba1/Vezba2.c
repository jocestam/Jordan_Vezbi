#include <stdio.h>;
/*
1. Напиши програм кој како влез зема два цели броја и ги споредува. Потоа го испечатува поголемиот број проследен со коментарот e pogolem od и го испечатува и помалиот број. Ако броевите се еднакви, програмот треба да испечати Broevite se ednakvi.
int main() {
	int x,y;
	printf("Vnesi go prviot broj:\n");
	scanf_s("%d", &x);
	printf("Vnesi go vtoriot broj:\n");
	scanf_s("%d",&y);
	if (x == y) 
	{
		printf("Broevite se ednakvi");
	}
	if (x > y)
	{
		printf("%d e pogolem od %d", x, y);
	}
	else printf("%d e pogolem od %d", y, x);
}
*/

/*
2.Напиши програм кој вчитува два цели броја и одредува дали се парни или непарни.
int main() 
{
	int x, y;
	printf("Vnesi go prviot broj:\n");
	scanf_s("%d", &x);
	printf("Vnesi go vtoriot broj:\n");
	scanf_s("%d", &y);
	if (x % 2 == 0)
	{
		printf("%d e paren broj\n", x);
	}
	else printf("%d e neparen broj\n", x);

	if (y % 2 == 0)
	{
		printf("%d e paren broj", y);
	}
	else printf("%d e neparen broj", y);
}
*/

/*
3. Обидете се со спецификаторот за конверзија %d да испечатите букви на следниот начин:
  printf(“%d”, ‘A’) - karakteri se koristat vo edinecni navodnici
  Што се случува кога се печатат следните карактери: b  c  0  1  2  $  *  +  / и празно место?
int main() {
	printf("%d  %d  %d  %d  %d  %d  %d  %d  %d", 'A', 'b', 'c', '0', '1', '*', '+', '/', ' ');
}
Се печатат ASCII кодовите на секој карактер.
*/

/*
4.  Во примерот p03_01.c, во наредбата printf наместо спецификаторот за конверзија  %f, поставете го спецификаторот %d. Што се случува и зошто?

float result;
int main()
{
	result = 7.0 / 22.0;
	printf("Rezultatot e %d\n", result);
	return (0);
}
Се печати некој чуден број бидејќи променлива од тип double не може да се испечати како integer.
*/

/*
5.Напиши програма која внесува радиус на круг и испечатува негова плоштина и периметар. За вредност на пи да се земе 3.14.
int main() {
	float r;
	printf("Vnesi radius na krugot:\n");
	scanf_s("%f", &r);
	printf("Plostinata na krugot e: %f\n", 3.14 * r * r);
	printf("Perimetarot na krugot e: %f\n", 2 * 3.14 * r);
}
*/

/*
6. Напишете програма која од стандардниот влез зема 5 букви и ги испечатува по следниот редослед: прво петтата, па третата, па втората, па првата, па четвртата буква. 
int main() {
	char bukvi[7];
	printf("Vnesi 5 bukvi:\n");
	fgets(bukvi, sizeof bukvi+1, stdin);
	printf("%c%c%c%c%c", bukvi[4], bukvi[2], bukvi[1], bukvi[0], bukvi[3]);
}
*/

/*
7.Да се модифицира задачата p03_04.c за да дава излез на променливите total  и average со три децимални места.
float data[5]; 
float total; 
float average; 
int main()
{
	data[0] = 34.0;
	data[1] = 27.0;
	data[2] = 45.0;
	data[3] = 82.0;
	data[4] = 22.0;
	total = data[0] + data[1] + data[2] + data[3] + data[4];
	average = total / 5.0;
	printf("Vkupno %.3f Sredna vrednost %.3f\n", total, average);
	return (0);
}
*/

/*
8.Напиши 4 начини за да ја зголемиш вредноста на променливата x за 1.
x=x+1;
x+=1;
x++;
++x;
*/
