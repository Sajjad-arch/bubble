#include <stdio.h>
int main (void)


{
    int i,j;
    int a[6];

    printf("Enter the elements: ");
     for(i=0; i<6; i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0; i<5; i++)
    {
        for(j=0; j<5-i; j++)
        {
            if(a[j]> a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }


    printf("THE UPDATED ARRAY IS: ");
    for(i=0; i<6; i++)
    {
        printf("%d ,",a[i]);
    }

    return 0;
}
