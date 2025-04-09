#include<stdio.h>
int main()
{
    float n1, n2, n3, media;
    int freq;

    printf("Digite as tres notas separadas por espaço: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Digite a frequência entre 0 e 100: ");
    scanf("%d", &freq);

    media = (n1 + n2 + n3) / 3;



    if (media > 8 && freq >= 75)
    {
        printf("O estudante foi Aprovado com Distinção, obteve nota %.1f e frequência %d%%", media, freq);
    }

    else if (media >= 6 && freq >= 75)
    {
        printf("O estudante foi Aprovado Direto, obteve nota %.1f e frequência %d%%", media, freq);
    }

    else if ((media >= 4 && freq >= 75) || (media >= 6 && freq < 75) || (media >= 4 && freq > 50 && freq < 75))
    {
        printf("O estudante Vai pra Final, obteve nota %.1f e frequência %d%%", media, freq);
    }
    else

        printf("O estudante foi Reprovado Direto, obteve nota %.1f e frequência %d%%", media, freq);

    return 0;

}
