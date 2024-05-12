#include <stdio.h>
int main(){
    int matriz[20][20];
    int linha[20];
    int i,j,k;
    int n;
    int umaVez = 0;
    
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <  n; j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }


    for (i = 0; i < n; i++)
    {
        linha[i] = 1+i; 
    }
    
    for (i = 0; i < n; i++)
    {
        for (k = 0; k < n; k++)
        {
            umaVez = 0;
            for (j = 0; j <  n; j++)
            {
                if (linha[k] == matriz[i][j])
                {
                    umaVez = umaVez+1;
                }
            }
            if (umaVez == 1)
            {
                printf("é um quadrado latino\n");
            }
            else
            {
                printf("Num é");
            }
        }
        
    }
    for (i = 0; i < n; i++)
    {
        for (k = 0; k < n; k++)
        {
            umaVez = 0;
            for (j = 0; j <  n; j++)
            {
                if (linha[k] == matriz[j][i])
                {
                    umaVez = umaVez+1;
                }
            }
            if (umaVez == 1)
            {
                printf("é um quadrado latino\n");
            }
            else
            {
                printf("Não é\n");
            }
        }
        
    }
   
   
    return 0;
}