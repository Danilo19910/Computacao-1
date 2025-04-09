#include<stdio.h>
int main()
{
    float A, G, Ra, Rg;

    printf("Digite o preço da gasolina: ");
    scanf("%f", &G);
    printf("Digite o preço do álcool: ");
    scanf("%f", &A);

    Rg = (12);
    Ra = (8);

    if (Ra / A > Rg / G)
    {
        printf("A");
    }
    else if (Ra / A < Rg / G)
    {
        printf("G");
    }
    else printf("G");
    return 0;

}
