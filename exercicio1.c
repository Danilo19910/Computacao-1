#include <stdio.h>

int main()

{
    int n = 0, m = 0;
    printf("Digite um número:\n");
    scanf("%d", &n);

    while (n >= 0)
    {
        if (m < n)
            m = n;
        printf("Digite um número: ");
        scanf("%d", &n);
    }
    printf("%d", m);
    return 0;
}

