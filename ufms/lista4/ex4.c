#include <stdio.h>
int main(){
    int numeroElementos[1000];
    int n;
    scanf("%d",&n);
    int quantidadeDeSubSequencias=1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&numeroElementos[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (numeroElementos[i-1] != numeroElementos[i])
        {
            quantidadeDeSubSequencias= quantidadeDeSubSequencias + 1;
        }
    }
    printf("%d",quantidadeDeSubSequencias);
    return 0;
}