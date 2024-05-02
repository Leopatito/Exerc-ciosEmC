#include <stdio.h>
 
int main() {
    int x,y,beto,carlos,rafael,casos;
    
    scanf("%d",&casos);
    for (int i = 1; i <= casos; i++)
    {
        scanf("%d %d",&x,&y);
        
        rafael= 3*3*x*x + y*y;
        beto = 2*x*x + 5*y*y*5;
        carlos = -100*x + y*y*y;
        
        
        if (carlos > beto && carlos > rafael)
        {
            printf("Carlos Ganhou\n");
        }
        else
        {
            if (beto > rafael)
            {
                printf("Beto ganhou\n");
            }
            else
            {
                printf("Rafael ganhou\n");
            }
        }
        
    }
    
    return 0;
}