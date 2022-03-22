#include <stdio.h>

/* 
1. 
Пронајди ги и корегирај ги грешките во следните наредби (може да има повеќе од една грешка во секоја од наредбите):
a) scanf(“d”, vrednost);  --->>  scanf("%d", &vrednost);
b) printf(“Proizvodot na% d i% d e% d”\n, x, y);    --->> ("Proizvodot na %d i %d e %d\n", x,y,z);
c) prvBroj + vtorBroj = sumaBroevi   --->> sumaBroevi = prvBroj + vtorBroj
d) * / Programata naogja maksimum od dva broja /*      --->>  /* Programata naogja maksimum od dva broja * /
e) Scanf(”%d”, &nekojBroj);   --->> scanf("%d, &nekojBroj")				;			
*/

/*
2. Напиши програм кој внесува 4 цели броја и ја испечатува нивната сума.
int main()
{
	int prvBroj, vtorBroj, tretBroj, cetvrtBroj, suma;
	printf("Vnesi go prviot broj:\n");
	scanf_s("%d", &prvBroj);
	printf("Vnesi go vtoriot broj:\n");
	scanf_s("%d", &vtorBroj);
	printf("Vnesi go tretiot broj:\n");
	scanf_s("%d", &tretBroj);
	printf("Vnesi go cetvrtiot broj:\n");
	scanf_s("%d", &cetvrtBroj);

	suma = prvBroj + vtorBroj + tretBroj + cetvrtBroj;
	printf("Sumata od cetirite broevi e %d", suma);
	return 0;
}
*/
/*
3. Напиши програм кој ги печати броевите од 1 до 4 на иста линија, при тоа можеш да користиш:
a)една prinf наредба, без спецификатори за конверзија
b)една prinf наредба, со 4 спецификатори за конверзија
c)4 printf наредби.
void main() {
	a)  printf("1234\n");
	b)  printf("%d%d%d%d\n", 1, 2, 3, 4);
	c)
	printf("1");
	printf("2");
	printf("3");
	printf("4");
}
*/

/*
 4. Напиши програм кој вчитува три цели броја и пресметува нивна целобројна средна вредност, сума и производ.
void main() {
	int prvBroj, vtorBroj, tretBroj, suma, proizvod, celobrojnaSrednaVrednost;
	prvBroj = 10;
	vtorBroj = 12;
	tretBroj = 8;
	suma = prvBroj + vtorBroj + tretBroj;
	printf("Celobrojnata sredna vrednost na broevite e: %d\n", suma / 3);
	printf("Sumata na trite broja e: %d\n", suma);
	printf("Proizvodot od trite broja e: %d", prvBroj * vtorBroj * tretBroj);	
}
*/

/*
5.
void main() {

	printf("*****\n*   *\n*   *\n*   *\n*   *\n*   *\n*****\n\n");
	printf("  ***\n *   *\n*     *\n*     *\n*     *\n *   *\n  ***  \n\n");
	printf("   *\n  ***\n*******\n   *\n   *\n   *\n   *\n\n");
	printf("   *\n  * *\n *   *\n*     *\n *   *\n  * *\n   *\n");
	system("pause");

}
*/

/*
6.Напиши програм кој внесува петцифрен број, ги распределува сите цифри на бројот во посебни променливи и ги печати секоја од цифрите со растојание една од дуга од три празни места.
int main()
{
	int broj,prvaCifra,vtoraCifra,tretaCifra,cetvrtaCifra,pettaCifra;
	broj = 42139;
	pettaCifra = broj%10;
	broj= broj/10;

	cetvrtaCifra = broj%10;
	broj= broj/10;

	tretaCifra= broj%10;
	broj= broj/10;

	vtoraCifra= broj%10;
	broj=broj/10;

	prvaCifra = broj;
	printf("%d   %d   %d   %d   %d",prvaCifra,vtoraCifra,tretaCifra,cetvrtaCifra,pettaCifra);

}
*/