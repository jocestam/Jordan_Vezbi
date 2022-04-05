/*
*1.Кога ги дефинираме функциите copy1 и copy2 во p09_13.c, првиот аргумент мора да е доволно голем за да ги добие вредностите на вториот аргумент. Што тоа значи?
* Значи ако првиот аргумент е помал од вториот, во првиот ќе се копираат само онолку вредности од вториот аргумент колку што е голем тој(првиот).
*/

/*
*2.Зошто вториот аргумент на двете функции во р09_13.с е деклариран како const char *?
* Затоа што од вториот аргумент вредностите се копираат во првиот т.е не претрпуваат промени.
*/ 

/*
3. Да се направи програма во која ќе се сместат оцени на студенти по предмети (дводимензионална низа во која во редици се студентите, а во колони се нивните оцени по 5 предмети). Програмата треба да го нуди следниот кориснички посредник:
Vnesi izbor:
0 Ispechati ja nizata so oceni
1 Najdi ja maksimalnataocena
2 Najdi ja minimalnata ocena
3 Ispecati ja prosechnata ocena za sekoja student
4 Kraj
Програмата да се реши со користење на покажувачи до функциите max, min, pecatiNiza, рrosek. Покажувачите кон четирите функции да се сместат во низата obrabotiOceni, а како индекс за повикување на секоја од функкциите да се користи изборот од корисничкото мени.


#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
	void maxOcena(int a[MAX][MAX]);
	void minOcena(int b[MAX][MAX]);
	void pecatiNiza(int c[MAX][MAX]);
	void prosek(int d[MAX][MAX]);
	void (*obrabotiOceni[4])(int) = { pecatiNiza,maxOcena, minOcena, prosek };
	int choice,i,n,j;


	printf("Vnesi broj na studenti: \n");
	scanf_s("%d", &n);

	int** m = realloc(NULL, sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		m[i] = realloc(NULL, sizeof(int) * 5);
	}

	for (i = 0;i < n;i++) 
	{
		for (j = 0;j < 5;j++)
		{
			m[i][j] =6 + rand() % 5;
		}
	}


	printf(" Vnesi 0 za da se ispecati nizata so oceni;\n Vnesi 1 za da se ispecati max ocena;\n Vnesi 2 za da se ispecati min ocena;\n Vnesi 3 za prosecna ocena;\n Vnesi 4 za kraj;\n");
	scanf_s("%d", &choice);

	while (choice >= 0 && choice < 4)
	{
		(*obrabotiOceni[choice])((int**)m,n);

		printf(" Vnesi 0 za da se ispecati nizata so oceni;\n Vnesi 1 za da se ispecati max ocena;\n Vnesi 2 za da se ispecati min ocena;\n Vnesi 3 za prosecna ocena;\n Vnesi 4 za kraj;\n");
		scanf_s("%d", &choice);
	}
	if (choice == 4)
	{
		printf("Kraj.\n");
		return 0;
	}
	else if (choice > 4)
	{
		printf("Ne postoi izbor %d.\n",choice);
	}
}

void maxOcena(const int **a,int n)
{
	int i, j;
	int max = 0;

	for (i = 0; i < n;i++)
	{
		max = a[i][0];
		for (j = 0;j < 4;j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
		printf("Max ocena za student %d e: %d\n", i + 1,max);
	}

}

void minOcena(const int** b,int n)
{
	int i, j;
	int min;

	for (i = 0; i < n;i++)
	{
		min = b[i][0];
		for (j = 0;j < 4;j++)
		{
			if (b[i][j] < min)
			{
				min = b[i][j];
			}
		}
		printf("Min ocena za student %d e: %d\n",i+1, min);
	}
}

void pecatiNiza(const int **c,int n)
{
	int i, j;

	for (i = 0;i < n;i++)
	{
		for (j = 0;j < 5;j++)
		{
			printf("%3d", c[i][j]);
		}
		printf("\n");

	}
}

void prosek(const int **d, int n)
{
	int i, j,suma,sr;
	suma = 0;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < 5;j++)
		{
			suma += d[i][j];
		}
	}
	sr = suma / (n*5);
	printf("Prosecnata ocena za %d studenti e: %d\n", n, sr);
}
*/
