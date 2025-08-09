/*Take the array of Students name & Id. Name & Id would
be statically stored. Sort the array using Bubble sort in
ascending order according to their ID number.*/
#include <stdio.h>
#include <string.h>


int main(void)


{

     int i,j;
     int n=5;
     int id[5]={6,4,9,3,2};
     char name[][20]={"K","A","W","T","G"};


    for(i=0; i<4; i++)
    {
        for(j=0; j<4-i; j++)
        {
            if(id[j]>id[j+1])  // FOR ID SWAP
            {
                int tid=id[j];
                id[j]=id[j+1];
                id[j+1]=tid;


                char tname[20];   //FOR NAME SWAP
                strcpy(tname, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], tname);




            }
        }
    }


     printf("THE UPDATER ARRAY IS: \n");
    for(i=0; i<5; i++)
    {
        printf("%d  - %s \n",id[i] , name[i]);
    }

    return 0;
}


