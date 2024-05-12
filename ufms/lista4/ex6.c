#include <stdio.h>
int main(){
    int n,m;
    int sequencia1[20],sequencia2[20];
    int i,j,k,l;
    int sequencia3[40];
    int numeroElementos=-1;
    int numeroMenor;
    int quailSequencia;
    int numeroMaior;
    int posicao;

    

    scanf("%d %d",&n,&m);

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&sequencia1[i]);
    }
    for ( i = 0; i < m; i++)
    {
        scanf("%d",&sequencia2[i]);
    }
    

















    numeroMaior = sequencia1[0];
    for ( i = 0; i < n; i++)
    {
        if (numeroMaior < sequencia1[i])
        {
            numeroMaior = sequencia1[i];
        }
    }
    for (j = 0; j < m; j++)
    {    
        if (numeroMaior < sequencia2[j])
        {
            numeroMaior = sequencia2[j];
        }
    } 
    














    
    numeroMenor = sequencia1[0];
    posicao = 0;
    quailSequencia = 1;
    

    for (l = 0; l < n+m; l++)
    {
        for ( i = 0; i < n; i++)
        {
            if (numeroMenor > sequencia1[i])
            {
                numeroMenor = sequencia1[i];
                quailSequencia = 1;
                posicao = i;
            }
        }
        for (j = 0; j < m; j++)
        {    
            if (numeroMenor > sequencia2[j])
            {
                numeroMenor = sequencia2[j];
                quailSequencia = 2;
                posicao = j;
            }
            
        }

        sequencia3[l] = numeroMenor;
        numeroMenor = numeroMaior;
        
        if (quailSequencia == 2)
        {
            sequencia2[posicao] = numeroMaior;
        }
        else
        {
            sequencia1[posicao] = numeroMaior;
        }
        
    }
    for (size_t i = 0; i < n+m; i++)
    {
        printf("%d", sequencia3[i]);
    }
    return 0;
}