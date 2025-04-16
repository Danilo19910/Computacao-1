#include <stdio.h>

int main()

{
    int n, x, i=0;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    while (i<=100)

    {
        x = i%n;
        if(x == 2)
            printf("Seu número é %d\n", i);
        i++;
    }

    return 0;
}
