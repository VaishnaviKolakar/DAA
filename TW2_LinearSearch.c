#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define MAX 20000

void getdata(int arr[])
{
 int i;
  //generating random numbers
  for(i=0;i<MAX;i++)
  {
     arr[i]=rand();
     printf("%d\n",arr[i]);

    }

}


int main()
{
    int a[10],i,size,item,pos,flag=0;
    int arr[MAX];

    clock_t start1=0,end1=0;
    getdata(arr);
    //item=arr[10];
start1=start1+clock();


    //printf("\n  Enter the size of an array: ");
    //scanf("%d",&size);

    //printf("\n  Enter the elements of the array: ");

    //LOOP TO STORE THE ELEMENTS
    //for(i=0;i<MAX;i++)
   // {
   //     scanf("%d",&arr[i]);
   // }

    printf("\n  Enter the element to be searched: ");
    scanf("%d",&item);

    //LOOP TO CHECK WHETHER THE SEARCH ELEMENT IS PRESENT OR NOT
    for(i=0;i<MAX;i++)
    {
        if(item==arr[i])
        {
            pos=i;
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("\n  The element is in the list and its position is: %d \t",pos+1);
    else
        printf("\n  The element is not found");


        end1=end1+clock();
  printf("Time Taken is =%f\n",((float)(end1-start1))/CLOCKS_PER_SEC);


    printf("Hello world!\n");
    return 0;
}
