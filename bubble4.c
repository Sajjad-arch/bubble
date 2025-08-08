/*Declare a floating data type Array, size will be dynamic.
Take the elements from the user and sort the array in
descending order using Bubble sort.*/


#include <stdio.h>
int main(void)
{

    int size,n,i,j;
    float t;

    printf("Enter the size of an array: ");
    scanf("%d",&size);
    float a[size];

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("ENTER THE ELEMENTS");
    for(i=0; i<n; i++)
    {
        scanf("%f",&a[i]);
    }

    for(i=n-1; i>0; i--)
    {
        for(j=n-1-i; j>0; j--)
        {
            if(a[j]>a[j-1])
            {
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
        }
    }


    printf("THE UPDATER ARRAY IS: ");
    for(i=0; i<n; i++)
    {
        printf("%.2f  ",a[i]);
    }

    return 0;

}
