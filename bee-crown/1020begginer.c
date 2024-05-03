#include <stdio.h>
int main()
{
    int dias,anoMostrar,mesMostrar,diaMostrar;
    scanf("%d",&dias);
    anoMostrar=mesMostrar=mesMostrar=0;
    if (dias >= 365)
    {
        anoMostrar = dias / 365;
        dias = dias - anoMostrar * 365;
    }
    if (dias >= 30)
    {
        mesMostrar = dias / 30;
        dias = dias  - mesMostrar*30;
    }
    diaMostrar = dias;
    printf("%d ano(s)\n",anoMostrar);
    printf("%d mes(es)\n",mesMostrar);
    printf("%d dia(s)\n",diaMostrar);
}