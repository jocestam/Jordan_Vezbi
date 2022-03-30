#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*
* 1.Напиши програм кој вчитува вредности за температури за секој ден од месецот и наоѓа средна месечна температура. Да се земе предвид дека различни месеци имаат различен број на денови.

int main()
{
	int temperaturi[32];
	int i,n,suma,srednaVrednost,denoviFevruari;
	suma = 0;
	for (i = 1;i <= 31;i++)
	{
		temperaturi[i] = 5 + rand() % 25;
		printf("%d ", temperaturi[i]);
	}

	printf("Za koj mesec sakate da presmetate? (Vnesete broj od 1 do 12):");
	scanf_s("%d", &n);
    
	if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
	{
		for (i = 1;i <= 31;i++)
		{
			suma += temperaturi[i];
		}
		srednaVrednost = suma / 31;
		printf("Srednata vrednost na temperaturi za mesec %d iznesuva: %d\n",n,srednaVrednost);
	}
	else if (n == 4 || n == 6 || n == 9 || n == 11)
	{
		for (i = 1;i < 30;i++)
		{
			suma += temperaturi[i];
		}
		srednaVrednost = suma / 30;
		printf("Srednata vrednost na temperaturi za mesec %d iznesuva: %d\n", n, srednaVrednost);

	}
	else if (n == 2)
	{
		printf("Izbravte mesec Fevruari. Dali ima 28 ili 29 denovi?\n");
		scanf_s("%d", &denoviFevruari);
		for (i = 1;i < denoviFevruari;i++)
		{
			suma += temperaturi[i];
		}
		srednaVrednost = suma / denoviFevruari;
		printf("Srednata vrednost na temperaturi za mesec %d iznesuva: %d\n", n, srednaVrednost);

	}
	else
	{
		printf("Ne postoi mesec %d \n", n);
	}
}
*/

/*
* 2.Прости броеви се броеви кои се деливи само со себе си и со бројот 1. Напиши програм кој внесува n елементи во низа. Да се овозможи функционалност да имаме променлив број на елементи во низата. Во почетокот сите елементи да се иницијализираат на 1. Потоа да се напише функција prosti која секој елемент од низата чиј индекс е прост број, го поставува на 0. На крај од така добиената низа да се најде начин да се испечатат простите броеви до n.

int main()
{
	int i, n;
	printf("Vnesi broj na elementi vo nizata(n):\n");
	scanf_s("%d", &n);
	int* niza = (int*)malloc(n * sizeof(int));

	for (i = 0;i < n;i++)
	{
		niza[i] = 1;
		printf("%d", niza[i]);
	}
	printf("\n");

	prosti(niza,n);
	for (i = 0;i < n;i++)
	{
		printf("%d", niza[i]);
	}

	printf("\nProsti broevi do n se: \n");
	for (i = 0;i < n;i++)
	{
		if (niza[i] == 0)
		{
			printf(" %d", i);
		}
	}

	return 0;
}
int prosti(int arr[],int n) 
{
	int i, j,flag=0;
	for (i = 2;i < n;i++)
	{
		flag = 0;
		for (j=2; j<=i/2;j++)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			arr[i] = 0;
		}

	}
	return arr;
}
*/

/*
* 3.Палиндроми се низи од букви што се читаат исто и оддесно на лево и одлево на десно. На пример зборот “radar” е палиндром. Да се напише програм во кој внесуваме низа од карактери. Треба да имаме функција palindrom која враќа вредност 1 ако стрингот е палиндром или 0 инаку.

#define SIZE 100
int main()
{
	char niza[SIZE];

	printf("Vnesi eden zbor(niza od bukvi): \n");
	scanf_s("%s",niza, (unsigned)_countof(niza));

	palindrom(niza);	
}
int palindrom(char string[])
{
	int flag, i;
	char string2[] = { _strrev(string) };
 	flag = strcmp(string,string2);

	if (flag == 0)
	{
			return 1;
	}
	else 
	{
	return 0;
	}
}
*/
