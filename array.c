#include<stdio.h>


//Traversing

    // int main()
    // {
    //     int size, a[50];

    //     printf("the size is:");
    //     scanf("%d", &size);
        
    //     if (size >50)
    //     {
    //         printf("size is exceeding the limit");
    //     }    

    //     printf("enter the values of array:\n");
    //     for (int i = 0; i < size; i++)
    //     {
    //         scanf("%d", &a[i]);
    //     }
    //     printf("the values are:\n");
    //     for(int i=0; i<size; i++)
    //     {
    //         printf("%d\n", a[i]);
    //     }
        

    //     return 0;
    // }


//Insertion


    int main()
    {

        int a[20], i, size, num, pos;

        printf("Enter the size of an array: ");
        scanf("%d", &size);
        
        if (size>20)
        {
            printf("Invalid input, exceeding the array size");
        }
        
        else
        {
            printf("Enter the elements of an array:\n");            
                for(i=0; i<=size-1; i++)
                {
                    scanf("\n%d", &a[i]);   
                }

            printf("The elements of array are:\n");
                for ( i = 0; i < size; i++)
                {
                    printf("%d\n", a[i]);
                }
        }

        printf("\nEnter the data you want to insert in array:\n");
        scanf("%d", &num);

        printf("Where you want to insert the Digit:\n");
        scanf("%d", &pos);

        for ( i = size-1; i >= pos-1; i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1] = num;
        size++;

        printf("the new array of inserted elements is:\n");
        for ( i = 0; i < size; i++)
        {
            printf("%d\n", a[i]);
        }
        
        


        return 0;

    }
