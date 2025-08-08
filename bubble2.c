/*Declare an Array, size will be dynamic. Take the elements
from the user and sort the array in ascending order using
Bubble sort.*/


#include <stdio.h>
int main(void)


{
    int size,n,i,j,t;

    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int a[size];

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("ENTER THE ELEMENTS");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    printf("THE UPDATER ARRAY IS: ");
    for(i=0; i<n; i++)
    {
        printf("%d  ",a[i]);
    }
}
