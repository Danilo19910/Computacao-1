#include<math.h>
#include<stdio.h>

int main()
{
    float Altura, Largura;
    float Area = Altura * Largura;
    float Tinta = Area / 2;


    printf("Qual a altura em metros? ");
    scanf("%0.f", &Altura);
    printf("Qual a largura em metros? ");
    scanf("%0.f", &Largura);


    if (Area < 0) {

    printf("Erro, digite valores positivos.");
    }

    else if (Area == 0) {

    printf("Não há área para pintar.");
    }

    else {

    printf("Área da parede: %0.f\n", Area);
    printf("Quantidade de tinta necessária: %0.f\n", Tinta);
    }



        return 0;
}
