#include <stdio.h>

int main()
{
    int n = 0, x = 0, q = 0;
    float m = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    while (n > -1000)
    {
        if (n>0)

        {
            q++;
            x = x + n;
        }
        printf("Digite um número: ");
        scanf("%d", &n);
    }
    printf("Quantidade de números positivos: %d\n", q);
    printf("A média dos valores positivos é: %.1f", m=x/q);

    return 0;

}
