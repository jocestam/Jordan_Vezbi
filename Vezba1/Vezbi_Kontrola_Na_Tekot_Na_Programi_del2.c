#include <stdio.h>
/*
* 1.Во програмот p05_02.c смести ја иницијализацијата на променливата sum во заглавието на наредбата for.

int main()
{
    int number;

    for (int sum = 2, number = 2; number <= 100; number += 2, sum += number) {
        if (number == 100)
        {
            printf("Sumata e %d\n", sum);
        }
        else continue;
    }

    return 0;
}
*/

/*
* 2.Програмот p05_03.c преработи го така да колонската репрезентација на вредностите на депозитот за секоја година биде порамнет одлево.
 
#include <math.h>  

int main()
{
    double amount;             
    double principal = 1000.0; 
    double rate = .05;         
    int year;          


    printf("%4s%25s\n", "Godina", "Vrednost na depozitot");

    for (year = 1; year <= 10; year++) {

        amount = principal * pow(1.0 + rate, year);

        printf("%-4d%-25.2f\n", year, amount);  За порамнување од лево само додаваме минус пред должината на полето.
    } 

    return 0; 
} 
*/

/*
* 3.Да се напише програма која ќе пресметува Питагорини броеви до 100. Тоа се броеви кои го исполнуваат следниот услов a2+b2=c2.
int a, b, c;
int main()
{
    for (a = 1;a <= 100;a++)
    {
        for (b = 1;b <= 100;b++)
        {
            for (c = 1;c <= 100;c++)
            {
                if (a * a + b * b == c * c)
                {
                    printf("Broevite a=%d, b=%d, c=%d go ispolnuvaat uslovot.\n", a, b, c);
                }
            }
        }
    }
    return 0;
}
*/

/*
* 4.Напиши програма која за внесен цел број кој може да е најмногу четири цифрен го испечатува неговиот еквивалент во римски броеви. 
int main()
{
    int number;
    printf("Vnesi broj pomegju 0 i 9999: \n");
    scanf_s("%d", &number);

    if (number > 0 && number <= 9999)
    { 
        printf("Rimskiot broj za %d e: ", number);
        while (number != 0)
        {

            if (number >= 1000)     
            {
                printf("M");
                number -= 1000;
            }

            else if (number >= 900)   
            {
                printf("CM");
                number -= 900;
            }

            else if (number >= 500)   
            {
                printf("D");
                number -= 500;
            }

            else if (number >= 400)  
            {
                printf("CD");
                number -= 400;
            }

            else if (number >= 100)  
            {
                printf("C");
                number -= 100;
            }

            else if (number >= 90)   
            {
                printf("XC");
                number -= 90;
            }

            else if (number >= 50)   
            {
                printf("L");
                number -= 50;
            }

            else if (number >= 40)   
            {
                printf("XL");
                number -= 40;
            }

            else if (number >= 10)
            {
                printf("X");
                number -= 10;
            }

            else if (number >= 9)    
            {
                printf("IX");
                number -= 9;
            }

            else if (number >= 5)   
            {
                printf("V");
                number -= 5;
            }

            else if (number >= 4)     
            {
                printf("I");
                number -= 4;
            }

            else if (number >= 1)    
            {
                printf("I");
                number -= 1;
            }

        }
        return 0;
    }
    else printf("Vnesovte broj nadvor od opsegot.");
}
*/

/*
* 5.Напиши програм во кој контролата на циклусот на броеви од 1 до 100 го прави for наредба. Во рамките на наредбата for треба да се испечати коментар дека бројот не е делив со три. Доколку бројот е делив со три, не е печати никаков коментар. Задачата да се реши со користење на наредбата continue. 
*/
int main()
{
    int i;
    for (i = 0;i <= 100;i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        else printf("%d ne e deliv so 3.\n", i);
    }
}