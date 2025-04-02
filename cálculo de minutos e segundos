#include<stdio.h>
int main()
{

    float hora, min, seg;
    //float aux = 5.5;

    printf("Digite hora, minuto e segundo: ");
    scanf("%f %f %f", &hora, &min, &seg);

    // se hora maior que 1 e minuto maior que 15
    if (hora>1 && min>15)
    {
        float segundos = (hora*3600.0 + min*60.0 + seg);
        printf("Quantidade de segundos: %f", segundos);

    }

    // caso contrario
    else
    {
        float minutos = (hora*60.0 + min + seg/60.0);

        printf("Quantidade de minutos: %f", minutos);

    }

    //printf("Horario: %02d:%02d:%02d\n", hora, min, seg);
    //printf("Float com duas casas: %.2f", aux);

    return 0;
}
