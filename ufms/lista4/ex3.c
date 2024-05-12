#include <stdio.h>
int main(){
    int notas[100];
    int n;
    scanf("%d",&n);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&notas[i]);
    }
    for (i = n-1; i >= 0; i--)
    {
        printf("%d ", notas[i]);
    }
    return 0;
}