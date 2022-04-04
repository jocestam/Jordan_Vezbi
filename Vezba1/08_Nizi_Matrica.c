#include <stdio.h>
#include <stdlib.h>

/*
* 4.Да се напише програма која во главната функција внесува број на редици и колони на дводимензионална матрица. Во функцијата vnesiMatrica внесува елементи, а преку функцијата pechatiMatrica ги печати елементите во табеларна форма.
* a)Да се напишат итеративни верзии на двете функции.
* b)Да се напишат рекурзивни верзии на двете функции.

#define MAX 100
int main()
{
	int n, m;
	int a[MAX][MAX];
	printf("Vnesi broj na redici: \n");
	scanf_s("%d", &n);
	printf("Vnesi broj na koloni: \n");
	scanf_s("%d", &m);

	vnesiMatrica(a,n, m);
	pecatiMatrica(a, n, m);

	vnesiMatricaRekurzija(a, n, m, 0, 0);
	pecatiMatricaRekurzija(a,n,m,0,0);
	return 0;
}

vnesiMatrica(const int mat[MAX][MAX],int n,int m)
{
	int i, j;
	for (i = 0;i < n;i++)
	{
		printf("Vnesi %d broja za %d redica.\n",m, i+1);
		for (j = 0;j < m;j++)
		{
			scanf_s("%d", &mat[i][j]);
		}
		printf("\n");
	}
	return mat;

}

pecatiMatrica(const int mat[MAX][MAX],int n,int m)
{
	int i=0, j=0;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < m;j++)
		{
			printf("%3d", mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*

int vnesiMatricaRekurzija(int mat[MAX][MAX], int n, int m, int i, int j)
{
	if (i == n - 1 && j == m - 1)
	{
		return mat;
	}
	else
	{

		for (i = 0;i < n;i++)
		{
			printf("Vnesi gi broevite za %d redica.\n", i + 1);
			for (j = 0;j < m;j++)
			{
				scanf_s("%d", &mat[i][j]);
			}
			printf("\n");
		}
		i = n - 1;
		j = m - 1;
		return vnesiMatricaRekurzija(mat[i][j], n, m, i, j);
	}
}
int pecatiMatricaRekurzija(int mat[MAX][MAX], int n, int m, int i, int j)
{
	if (i == n-1 && j == m-1)
	{
		return 0;
	}
	else
	{
		for (i = 0;i < n;i++)
		{
			for (j = 0;j < m;j++)
			{
				printf("%3d", mat[i][j]);
			}
			printf("\n");
		}
		i = n - 1;
		j = m - 1;
		return vnesiMatricaRekurzija(mat[i][j], n, m, i, j);
	}
}
*/