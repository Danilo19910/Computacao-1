#include<math.h>
#include<stdio.h>

int main()
{
    int numerobase, inicio, fim, soma = 0, i;

    printf("Digite um número para calcular seus múltiplos: ");
    scanf("%d", &numerobase);
    printf("Agora, digite o número que dará ínicio ao intervalo que deseja somar: ");
    scanf("%d", &inicio);
    printf("Digite o número do fim do intervalo: ");
    scanf("%d", &fim);

    i = inicio;

    while (i <= fim)
    {
        if (i % numerobase == 0)
        {
            soma += i;
        }
        i++;
    }


    printf("A soma dos múltiplos de %d no intervalo %d a %d é: %d", numerobase, inicio, fim, soma);


    return 0;
}


