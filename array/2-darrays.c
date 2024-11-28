#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,m;
    printf("Enter the size of 2-d array:\n");
    scanf("%d\n%d", &n,&m);

    int i, j, arr[n][m];
    printf("Enter the elements:\n");
    for ( i = 0; i < n; i++)
    {
       for ( j = 0; j < m; j++)
       {
        scanf("%d ", &arr[i][j]);
       }
       
    }
    
    printf("The elements are: ");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        
    }
    

    return 0;
}
