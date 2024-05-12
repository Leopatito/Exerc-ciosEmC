#include <stdio.h>
int main(){
    int array[50];
    int array1[50];
    int uniao[50];
    int verdade = 0;
    int numeroElementos = -1;

    int n1, n2;
    int i,j,k;
    scanf("%d %d", &n1,&n2);
    for ( i = 0; i < n1; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for ( i = 0; i < n2; i++)
    {
        scanf("%d",&array1[i]);
    }
   
    
    for (j = 0; j < n1; j++)
    {
        for ( i = 0; i < n2; i++)
        {   
            verdade = 0;
            
            for ( k = 0; k <= numeroElementos ; k++)
            {
                if (array[j] == uniao[k])
                {
                    verdade = 1;
                }
                
            }
            if (verdade == 0)
            {
                numeroElementos = numeroElementos + 1;
                uniao[numeroElementos] = array[j];
            }

            
        }
    }
    for (i = 0; i < n2; i++)
    {
        
        verdade = 0;
        
        for ( k = 0; k <= numeroElementos ; k++)
        {
            if (array1[i] == uniao[k])
            {
                verdade = 1;
            }
            
        }
        if (verdade == 0)
        {
            numeroElementos = numeroElementos + 1;
            uniao[numeroElementos] = array1[i];
        }

            
        
    }
    printf("\n");
    for (i = 0; i <= numeroElementos; i++) {
        printf("%d ",uniao[i]);
    }
    return 0;
}