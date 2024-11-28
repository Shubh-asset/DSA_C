#include<stdio.h>

int main(int argc, char const *argv[])
{

    int arr[]= {1,2,3,4,5};
    int *q;
    q = arr;

    printf("%d\n", q);
    //q++;
    printf("%d\n\n", &q);

    printf("%d\n", arr[2]);
    printf("%d\n", *(q+2));
    printf("%d\n", *(arr+2));
    printf("%d\n", *(2+arr));
    printf("%d\n", &arr[0]+2);
    printf("%d\n\n", 2[arr]);

    printf("%d\n", &arr[2]);
    printf("%d\n", &q[2]);
    printf("%d\n", (arr+1));
    printf("%d\n\n", (1+arr));

    printf("%d\n", arr[3]);
    printf("%d\n", *(q+3));

    return 0;
}
