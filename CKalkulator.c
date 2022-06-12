#include <stdio.h>
int main()
{
    // deklarisanje varijabli
    char opt;
    int n1, n2;
    float res;
    printf (" Izaberite operator(+, -, *, /, s (kvadrat), k (koren)) da izvrsite racunsku operaciju u ovom C kalkulatoru \n ");
    scanf ("%c", &opt);

    printf (" \n Unesite prvi broj: ");
    scanf(" %d", &n1);
    printf (" Unesite drugi broj, a u slucaju korenovanja i kvadriranja upisite bilo sta: ");
    scanf (" %d", &n2);

    switch(opt)
    {
        case '+':
            res = n1 + n2;
            printf (" %.2f",  res);
            break;

        case '-':
            res = n1 - n2;
            printf ("  %.2f",  res);
            break;

        case '*':
            res = n1 * n2;
            printf (" %.2f",  res);
            break;

        case '/':
            if (n2 == 0)
            {
                printf (" \n Delilac ne moze biti nula. Izaberite drugu vrednost: ");
                scanf ("%d", &n2);
                }
            res = n1 / n2;
            printf ("  %.2f", res);
            break;

        case 's':
            res = n1 * n1;
            printf(" %.2f", res);
            break;

        case 'k':
            res = sqrt(n1);
            printf(" %.2f", res);
            break;

        default:
            printf (" Doslo je do greske! Proverite ponudjene opcije ");
    }
    return 0;
}
