/*Take the array of Students name & Id. Name & Id would
be given by the user. Sort the array using Bubble sort in
ascending order according to their ID number.*/
/*Take the array of Students name & Id. Name & Id would
be statically stored. Sort the array using Bubble sort in
ascending order according to their ID number.*/
#include <stdio.h>
#include <string.h>


int main(void)


{

     int i,j,n;

    printf("Enter the number of students: ");
    scanf("%d",&n);
    int id[n];
    char name[n][20];


    for(i=0; i<n; i++)
    {
        printf("Enter id of students %d: ",i+1);
        scanf("%d",&id[i]);



        printf("Enter name of students %d: ",i+1);
        scanf("%s",&name[i]);

    }



    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
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


