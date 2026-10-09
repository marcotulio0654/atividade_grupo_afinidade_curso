#include <stdio.h>
#include <stdlib.h>

int main()
{
    int informatica;
    int eletricista;
    int culinaria;
    int mecanica;
    int resposta;

    printf("Eu consigo me lidar bem com críticas diretas e prazos apertados?");
    scanf("%d", &resposta);
    if (resposta==1)
    {
        culinaria+=1;
    }

    printf("Eu consigo me lidar bem com passar várias horas do dia sentado em frente a um computador?");
    scanf("%d", &resposta);
    if (resposta==1)
    {
        informatica+=1;
    }

    printf("Eu tenho paciência e facilidade para lidar com ferramentas manuais?/n");
    scanf("%d", &resposta);
    if (resposta==1)
    {
        mecanica+=1;
    }

    printf("Eu tenho disciplina para seguir regras rígidas de segurança?/n");
    scanf("%d", &resposta);
    if (resposta==1)
    {
        eletricista+=1;
    }

    printf("A água conduz eletricidade?/n");
    scanf("%d", &resposta);
    if (resposta==1)
    {
        eletricista+=1;
    }

    printf("Pode colocar vasilhas de vidro temperado dentro do micro-ondas?/n");
    scanf("%d", &resposta);
    if (resposta==1)
    {
        culinaria+=1;
    }

    printf("Andar com o carro sempre na reserva de combustível pode estragar a bomba de combustível? /n");
    scanf("%d", &resposta);
    if (resposta==1)
    {
        mecanica+=1;
    }

     printf("Usar a mesma senha para todas as minhas contas na internet é seguro? /n");
    scanf("%d", &resposta);
    if (resposta==1)
    {
        informatica+=1;
    }












    if(informatica>=eletricista)
    {
        printf("a");
    }
    else
    {
        printf("b");
    }

    return 0;
}
