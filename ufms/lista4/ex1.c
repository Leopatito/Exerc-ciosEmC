#include <stdio.h>
int main(){
    int notas[1000];
    int n;
    int soma = 0;
    int i;
    int numerosAcimaDaMedia =0;;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&notas[i]);
        soma = soma + notas[i];
    }
    soma = soma / n;

    for (i = 0; i <  n; i++)
    {
        if (soma > notas[i])
        {
            numerosAcimaDaMedia = numerosAcimaDaMedia +1;
        }
    }
    printf("%d", numerosAcimaDaMedia);
    return 0;
}