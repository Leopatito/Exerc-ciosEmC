#include <stdio.h>
int main(){
    int i,j;
    int caixa[8][8];
    int comida=0;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
        {
            scanf("%d",&caixa[i][j]);
        }
        
    }
    for (i = 0; i < 8; i++) {
        for (j = 0 ; j < 8; j++) {
            printf("%d ",caixa[i][j]);
        }
        printf("\n");
    }
    /*
    0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0
    0 0 0 0 0 2 0 0
    0 0 0 0 0 0 1 0
    0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0
    */
    for (i = 0; i < 8; i++) {
        for (j = 0 ; j < 8; j++) {
            if (caixa[i][j] == 1)
            {
                if (caixa[i-1][j-1] == 2 && caixa[i-2][j-2] == 0)
                {
                    comida= comida +1;
                }
                if (caixa[i+1][j-1] == 2 && caixa[i+2])
                {
                    
                }
            }
            
        }
        
    }
    printf("comida %d",comida);

    return 0;
}