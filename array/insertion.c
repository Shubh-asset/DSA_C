#include<stdio.h>

//Insertion: at any position 


    // int main()
    // {

    //     int a[20], i, size, num, pos;

    //     printf("Enter the size of an array: ");
    //     scanf("%d", &size);
        
    //     if (size>20)
    //     {
    //         printf("Invalid input, exceeding the array size");
    //     }
        
    //     else
    //     {
    //         printf("Enter the elements of an array:\n");            
    //             for(i=0; i<=size-1; i++)
    //             {
    //                 scanf("\n%d", &a[i]);   
    //             }

    //         printf("The elements of array are:\n");
    //             for ( i = 0; i < size; i++)
    //             {
    //                 printf("%d\n", a[i]);
    //             }
    //     }

    //     printf("\nEnter the data you want to insert in array:\n");
    //     scanf("%d", &num);

    //     printf("Where you want to insert the Digit:\n");
    //     scanf("%d", &pos);

    //     printf("the position is '%d' \nbut the index will be '%d'\n", pos, pos-1);

    //     for ( i = size-1; i >= pos-1; i--)
    //     {
    //         a[i+1]=a[i];
    //     }
    //     a[pos-1] = num;
    //     size++;

    //     printf("the new array of inserted elements is:\n");
    //     for ( i = 0; i < size; i++)
    //     {
    //         printf("%d\n", a[i]);
    //     }
        
    //     return 0;

    // }

//Insertion: at the end of the array

    int main()
    {
         
        int m, size, num, pos, i;
       
        
        

        printf("Enter the size of Array(default)\n");
        scanf("%d", &m);

        int arr[m];

        printf("Enter the size of array for your values: ");
        scanf("%d", &size);

        if (size>m)
        {
            printf("The size you entered is much larger than defined array!!");
        }
        
        else
        {
        printf("Enter the values of your array: ");
            for( i=0; i<size-1; i++)
            {
                scanf("%d", &arr[i]);
            }
        }

        return 0;
    }