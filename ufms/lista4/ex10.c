#include <stdio.h>
int main(){
    int matriz[20][20];
    int transposta[20][20];
    int i,j;
    int n,m;
    scanf("%d %d",&n,&m );
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <  m; j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j <  n; j++)
        {
            transposta[i][j] = matriz[j][i];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j <  n; j++)
        {
            printf("%d ",transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}