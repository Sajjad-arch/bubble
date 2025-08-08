/*Take the array of Students name & Id. Name & Id would
be statically stored. Sort the array using Bubble sort in
ascending order according to their ID number.*/
#include <stdio.h>

struct student
 {
     char name[50];
     int id;
 };

int main(void)


{
    struct student a[5]={{"A",4},{"B",1},{"C",2},{"J",5},
        {"S",20}};
    int i,j;

   struct student t;




    for(i=0; i<4; i++)
    {
        for(j=0; j<4-i; j++)
        {
            if(a[j].id>a[j+1].id)
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }


     printf("THE UPDATER ARRAY IS: \n");
    for(i=0; i<5; i++)
    {
        printf("%s  - %d \n",a[i].name, a[i].id);
    }

    return 0;
}


