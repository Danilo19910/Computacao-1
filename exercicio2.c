#include <stdio.h>

int main()
{
    int n = 0, x = 0, i = 0;
    float c = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    while (n > -1000)
    {
        if (n>0)

        {
            i++;
            x = x + n;
        }
        printf("Digite um número: ");
        scanf("%d", &n);
    }
    printf("Quantidade de números positivos: %d\n", i);
    printf("A média dos valores positivos é: %.1f", c=x/i);

    return 0;

}
