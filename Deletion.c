#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{
    int m;
    printf("The size of an array: ");
    scanf("%d", &m);

    int arr[m], size, pos, item;

        printf("the Size of the array should be: ");
        scanf("%d", &size);

        if (size>m)
        {
            printf("Invalid input");
        }
        else
        {
            printf("Enter the elements of array:\n");
            for (int i = 0; i < size; i++)
            {
                scanf("%d", &arr[i]);
            }

            printf("The array elements are:\n");
            for (int i = 0; i < size; i++)
            {
                printf("%d\n", arr[i]);
            }
            
            //Deletion from random position
                /*printf("Enter the position of element you want to delete: ");
                scanf("%d", &pos);

                if(pos<=0 || pos>size)
                {
                    printf("Kindly enter the correct position!");
                    return 1;
                }
                else
                {
                    item = arr[pos-1];
                    for(int i = pos-1; i < size-1; i++)
                    {
                        arr[i] = arr[i+1];
                    }
                    size--;                   
                }*/

            //Deleting from initial position
                /*item = arr[0];
                    for(int i = 0; i < size-1; i++)
                    {
                        arr[i] = arr[i+1];
                    }
                    size--; */
            
            //Deletion from end position
                size--;

            //printing new array :
                sleep(2);
                printf("The new array formed after deleting one of them:\n");
                for (int i = 0; i < size; i++)
                {
                    printf("%d\n", arr[i]);
                }
            
        }
    

    return 0;
}
