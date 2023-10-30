#include <stdio.h>
#include <string.h>

int main()
{
    int times = 0;
    float forcaTime1 = 0;
    float forcaTime2 = 0;
    char nomeTime1[31];
    char nomeTime2[31];

    while (times < 2)
    {
        char nomeTime[31];
        int forcas[6] = {0};

        scanf(" %30[^\n]", nomeTime);

        for (int i = 0; i < 11; i++)
        {
            char nome[31];
            char posicao;
            int forca;

            scanf(" %30[^;]; %c; %d", nome, &posicao, &forca);

            switch (posicao)
            {
            case 'G':
                forcas[0] += forca;
                break;
            case 'L':
                forcas[1] += forca;
                break;
            case 'Z':
                forcas[2] += forca;
                break;
            case 'V':
                forcas[3] += forca;
                break;
            case 'M':
                forcas[4] += forca;
                break;
            case 'A':
                forcas[5] += forca;
                break;
            
            default:

                return 1;
            }
        }

        float forcaDefinitivaTotal;
        float forcaDefinitivaG, forcaDefinitivaL, forcaDefinitivaZ, forcaDefinitivaV, forcaDefinitivaM, forcaDefinitivaA;
        forcaDefinitivaG = forcas[0] * 8;
        forcaDefinitivaL = forcas[1] * 10;
        forcaDefinitivaZ = forcas[2] * 5;
        forcaDefinitivaV = forcas[3] * 8;
        forcaDefinitivaM = forcas[4] * 11;
        forcaDefinitivaA = forcas[5] * 12;

        forcaDefinitivaTotal = (forcaDefinitivaG + forcaDefinitivaL + forcaDefinitivaZ + forcaDefinitivaV + forcaDefinitivaM + forcaDefinitivaA) / 100;

        if (times == 0)
        {
            strcpy(nomeTime1, nomeTime);
            forcaTime1 = forcaDefinitivaTotal;
        }
        else
        {
            strcpy(nomeTime2, nomeTime);
            forcaTime2 = forcaDefinitivaTotal;
        }

        times++;
    }

    printf("%s: %.2f de forca\n", nomeTime1, forcaTime1);
    printf("%s: %.2f de forca\n", nomeTime2, forcaTime2);

    if (forcaTime1 > forcaTime2)
    {
        printf("%s eh mais forte\n", nomeTime1);
    }
    else if (forcaTime1 < forcaTime2)
    {
        printf("%s eh mais forte\n", nomeTime2);
    }

    return 0;
}
