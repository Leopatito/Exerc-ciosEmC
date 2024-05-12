#include <stdio.h>
int main(){
    int n;
    int sequencia1[20];
    int i,j;
    int sequencia3[20];
    int numeroMenor;
    
    int numeroMaior;
    int posicao;

    

    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&sequencia1[i]);
    }
    
    

















    numeroMaior = sequencia1[0];
    for ( i = 0; i < n; i++)
    {
        if (numeroMaior < sequencia1[i])
        {
            numeroMaior = sequencia1[i];
        }
    }
    
    














    
    numeroMenor = sequencia1[0];
    posicao = 0;
   
    

    for (j = 0; j < n; j++)
    {
        for ( i = 0; i < n; i++)
        {
            if (numeroMenor > sequencia1[i])
            {
                numeroMenor = sequencia1[i];
                
                posicao = i;
            }
        }
        sequencia3[j] = numeroMenor;
        numeroMenor = numeroMaior;
        
       
        sequencia1[posicao] = numeroMaior;
        
        
    }
    int soma = sequencia3[0] + sequencia3[n-1];
    for (size_t i = 0; i < n; i++)
    {
        if (soma == sequencia3[i] + sequencia3[n-1-i])
        {
            printf("São igual");
        }
    }
    return 0;
}