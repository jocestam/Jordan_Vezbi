#include <stdio.h>
/*
* 1. Модифицирај го програмот p04_01.c така да ги испуштиш break наредбите. Што се случува? Покажи пример.
    int main()
{
        int mesec;     

        printf("Vnesi go mesecot so negoviot reden broj: ");
        scanf_s("%d", &mesec);

        switch (mesec) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Ima 31 den\n");

        case 4:
        case 6:
        case 9:
        case 11:
            printf("Ima 30 dena\n");

        case 2:
            printf("Vo prestapni godini ima 29, a vo obichni 28 dena\n");
            
        default:
            printf("Greshen broj na mesec!\n");
        } 

        return 0; 

    }

Ако е испуштена break наредбата, ѓи извршува сите наредби од каде што е исполнет условот па надолу. Пример ако внесеме 12, ќе се прикажат сите пораки, ако внесеме 2, ќе се прикажат двете пораки кои следуваат после case 2.
*/

/*
* 2.Модифицирај го програмот p04_02.c така да наместо да е предефинирана вредноста на променливата counter, треба на корисникот да му се овозможи тој да внесе колку ученици има во класот.
int main()
{
    int counter; 
    int grade;  
    int total;   
    int average; 
    int i=1;

    total = 0;   

    printf("Vnesi broj na ucenici: ");
    scanf_s("%d", &counter);

    while (i <= counter) {     
        printf("Vnesi ocena: "); 
        scanf_s("%d", &grade);   
        total += grade;   
        i++;
    } 

    average = total / counter;

    printf("Srednata vrednost na klasot e %d\n", average);

    return 0; 
}
*/

/*
* 3.Модифицирај го претходниот програм (вежба 2) така да просекот се пресметува како децимален број со точност од 3 децимали.
int main()
{
    int counter;
    int grade;
    float total;
    float average;
    int i = 1;

    total = 0;

    printf("Vnesi broj na ucenici: ");
    scanf_s("%d", &counter);

    while (i <= counter) {
        printf("Vnesi ocena: ");
        scanf_s("%d", &grade);
        total += (float)grade;
        i++;
    }

    average = total / counter;
    printf("Srednata vrednost na klasot e %.3f\n", average);
    return 0;
}
*/

/*
* 4.Напиши програма која ја пресметува сумата на броевите од 1 до десет.
int main()
{
    int suma, i;
    suma = 0;
    i = 1;
    while (i <= 10)
    {
        suma += i;
        i++;
    }
    printf("Sumata na broevite od 1 do 10 e: %d", suma);
}
*/

/*
* 5.Напиши програма која за внесени десет броја, го пресметува нивниот производ.
int main()
{
    int broevi[10];
    int proizvod;
    int i;
    i = 0;
    proizvod = 1;
    printf("Vnesi 10 broja:\n");
    while (i <= 9)
    {
        scanf_s("%d", &broevi[i]);
        proizvod *= broevi[i];
        i++;
    }
    printf("Proizvodot na vnesenite broevi e: %d\n", proizvod);
}
*/

/*
* 6. Напиши програма која пресметува сума на внесени броеви од тастатура се додека не се внесе -1. 
int main()
{
    int vnesenBroj, suma;
    suma = 0;
    vnesenBroj = 0;

    printf("Vnesuvaj broevi:\n");
    while (vnesenBroj != -1)
    {
        scanf_s("%d", &vnesenBroj);
        suma += vnesenBroj;
      
    }
    suma++; - Поради тоа што го рачуна и -1 во сумата.
    printf("Vnesovte -1. Sumata na vnesenite broevi e: %d\n", suma); 
}
*/

/*
* 7.Напиши програма која пресметува сума на внесени броеви од тастатура се додека не се внесе карактер ‘n’.
int main()
{
    int vnesenBroj,suma,x;
    char confirmation;
    vnesenBroj = 0;
    x = 1;
    suma = 0;

    while (x != 0)
    {
        printf("Vnesi broj: \n");
        scanf_s("%d", &vnesenBroj);

        printf("Ushte?: d/n\n");
        scanf_s(" %c", &confirmation);
        switch (confirmation)
        {
        case 'd':
            suma += vnesenBroj;
            break;
        case 'n':
            suma += vnesenBroj;
            printf("Vnesovte n. Sumata na vnesenite broevi e: %d\n", suma);
            x = 0;
            break;
        default:
            printf("Vnesovte pogresen podatok.\n");
            break;
        }
    }
}
*/

/*
* 8.Една стоковна куќа продава 5 производи чии цени се дадени во долната табела.
* Proizvod 1=50,5 ; Proizvod 2=45.6 ; Proizvod 3=32,8 ; Proizvod 4=65.3 ; Proizvod 5 =20.0 ;
* Програмот треба да ја користи switch наредбата за да ја одреди цената за секој  производ. Програмот треба да ја пресмета и испечати вкупната продадена вредност за секој од производите посебно, како и вкупната сума за сите производи продадени во текот на денот.
* 
int main()
{
    int x,brojNaProizvod,kolicina,counter,brojNaProdadeni;
    float cena, vkupnaCena;
    counter = 1;
    vkupnaCena = 0.0;
    x = 0;
    brojNaProizvod = 0;
    
    printf("Kolku tipovi na proizvodi se prodadeni denes? (0-5)\n");
    scanf_s("%d",&brojNaProdadeni);
    if (brojNaProdadeni == 0)
    {
        printf("Nemate prodadeno proizvodi od nitu eden tip");
    }
    else if (brojNaProdadeni > 5) 
    {
        printf("Vnesovte 5. Nemate tolku tipovi na proizvodi.");
    }
    else {
        while (counter <= brojNaProdadeni)
        {
            printf("Vnesi broj na proizvod i prodadena kolicina:\n");
            scanf_s("%d %d", &brojNaProizvod, &kolicina);

            switch (brojNaProizvod)
            {
            case 1:
                cena = 50.5;
                printf("Vkupnata prodadena vrednost za proizvod 1 e: %f\n", cena * kolicina);
                vkupnaCena += cena*kolicina;
                counter++;
                break;
            case 2:
                cena = 45.7;
                printf("Vkupnata prodadena vrednost za proizvod 2 e: %f\n", cena * kolicina);
                vkupnaCena += cena*kolicina;
                counter++;
                break;
            case 3:
                cena = 32.8;
                printf("Vkupnata prodadena vrednost za proizvod 3 e: %f\n", cena * kolicina);
                vkupnaCena += cena*kolicina;
                counter++;
                break;
            case 4:
                cena = 65.3;
                printf("Vkupnata prodadena vrednost za proizvod 4 e: %f\n", cena * kolicina);
                vkupnaCena += cena*kolicina;
                counter++;
                break;
            case 5:
                cena = 20.0;
                printf("Vkupnata prodadena vrednost za proizvod 5 e: %f\n", cena * kolicina);
                vkupnaCena += cena*kolicina;
                counter++;
                break;
            default:
                printf("Ne postoi takov proizvod! Obidete se povtorno.\n");
                break;
            }

        }
        printf("Vkupnata vrednost na prodadeni proizvodi e %f", vkupnaCena);
    }
}
*/

/*
* 9.Една голема хемиска компанија ги плаќа своите продавачи делумно и на процент. Продавачите земаат плата од 200 евра плус 9% од вкупната нивна продажба за тој месец. На пример, ако некој продавач продал роба вредна 5000 евра, тогаш добива 200 евра плус 9% од 5000, значи вкупно 650 евра. Напиши програма која за внесен месечен промет му ја пресметува платата на вработениот. 

int main()
{
    int brojNaVraboteni,counter;
    float plata,promet;
    counter = 1;

    printf("Vnesi broj na vraboteni: \n");
    scanf_s("%d", &brojNaVraboteni);

    while (counter <= brojNaVraboteni)
    {
        printf("Vnesi mesecen promet za vraboten %d:\n", counter);
        scanf_s("%f", &promet);
        plata = 200 + (promet * 9 / 100);
        printf("Platata za vraboten %d iznesuva %f\n", counter, plata);
        counter++;
    }
}
*/