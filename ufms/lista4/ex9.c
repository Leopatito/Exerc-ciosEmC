#include <stdio.h>
int main(){
    int matriz[5][5]={
        {0,15,30,5,12},
        {15,0,10,17,28},
        {30,10,0,3,11},
        {5,17,3,0,80},
        {12,28,11,80,0}
    };
    int total = 0 ;
   
    int cidadeDoComeço;
    int cidadeDeStart,cidadeDeFinal;

    
    
    scanf("%d",&cidadeDoComeço);
    cidadeDoComeço = cidadeDoComeço-1;
    cidadeDeStart = cidadeDoComeço;
    cidadeDeFinal = 7;
    while (cidadeDoComeço != cidadeDeFinal)
    {
        scanf("%d",&cidadeDeFinal);
        cidadeDeFinal=cidadeDeFinal-1;
        total = total + matriz[cidadeDeStart][cidadeDeFinal];
        cidadeDeStart = cidadeDeFinal;
        
    }  
    printf("%d",total);
    
   
   
    return 0;
}