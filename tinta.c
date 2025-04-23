#include<math.h>
#include<stdio.h>

int main()
{
    float Altura, Largura;

    printf("Qual a altura em metros? ");
    scanf("%f", &Altura);
    printf("Qual a largura em metros? ");
    scanf("%f", &Largura);


    if (Altura <= 0 || Largura <= 0)
    {
        printf("Erro, digite valores positivos.");
        return 1;
    }

    float Area = Altura * Largura;
    float Tinta = Area / 2;
    Tinta = ceil(Tinta);

    if (Area == 0)
    {
        printf("Não há área para pintar.");
    }
    else
    {
        printf("Área da parede: %0.1f metros\n", Area);
        printf("Quantidade de tinta necessária: %0.1f litros\n", Tinta);
    }

    return 0;
}
