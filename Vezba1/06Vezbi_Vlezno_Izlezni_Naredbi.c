#include <stdio.h>
/*
* 1.1.	Напиши програм кој конвертира целобројни фарантхајтови температури од 0-212 степени во децимални цезлиусови температури со 3 цифри прецизност. Да се користи формулата:
* celsius = 5.0 /9.0 * (fahrenheit - 32).
* Излезот да се испечати во две десно порамнети колони од по 10 карактери, а целзиусовите вредности треба да се предводени од знак и за позитивни и за негативни вредности.

int main()
{
	int fahrenheit;
	double celsius;
	printf("%10s%10s\n", "Fahrenheit", "Celsius");
	for (fahrenheit = 0;fahrenheit <= 212; fahrenheit++)
	{
		celsius = 5.0 / 9.0 * (fahrenheit - 32);
		printf("%10d%10.3f\n", fahrenheit, celsius);

	}
}
*/

/*
* 2.Напиши програма која вчитува датуми во облик gg/mm/dd, gg-mm-dd и gg+mm+dd и ги испечаува така да наместо бројот на месецот се испечати имато на месецот.

int main()
{
	int den, mesec, godina;

	printf("Vnesi datum vo eden od slednive oblici gg/mm/dd, gg-mm-dd ili gg+mm+dd:\n");
	scanf_s("%d%*c%d%*c%d", &godina, &mesec, &den);

	switch (mesec) 
	{
	case 1:
		printf("Vneseniot datum e %d Januari %d godina", den,godina);
		break;
	case 2:
		printf("Vneseniot datum e %d Fevruari %d godina", den, godina);
		break;
	case 3:
		printf("Vneseniot datum e %d Mart %d godina", den, godina);
		break;
	case 4:
		printf("Vneseniot datum e %d April %d godina", den, godina);
		break;
	case 5:
		printf("Vneseniot datum e %d Maj %d godina", den, godina);
		break;
	case 6:
		printf("Vneseniot datum e %d Juni %d godina", den, godina);
		break;
	case 7:
		printf("Vneseniot datum e %d Juli %d godina", den, godina);
		break;
	case 8:
		printf("Vneseniot datum e %d Avgust %d godina", den, godina);
		break;
	case 9:
		printf("Vneseniot datum e %d Septemvri %d godina", den, godina);
		break;
	case 10:
		printf("Vneseniot datum e %d Oktomvri %d godina", den, godina);
		break;
	case 11:
		printf("Vneseniot datum e %d Noemvri %d godina", den, godina);
		break;
	case 12:
		printf("Vneseniot datum e %d Dekemvri %d godina", den, godina);
		break;

	default:
		printf("Vnesovte nepravilen datum !");
		break;

	}
	return 0;
}
*/