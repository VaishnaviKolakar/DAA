#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define MAX 1800

void getdata(int arr[])
{
 int i;
  //generating random numbers
  for(i=0;i<MAX;i++)
  {
     arr[i]=rand();
    }
} 
void insertion_sort(int * x)
{
    int temp, i, j;
 
    for (i = 1;i < MAX;i++)
    {
        temp = x[i];
        j = i - 1;
        while (temp < x[j] && j >= 0)
        {
            x[j + 1] = x[j];
            j = j - 1;
        }
        x[j + 1] = temp;
    }
}
int main(int argc, char *argv[])
{
         int a[MAX], i;
  
         clock_t start1=0,end1=0;
         
           getdata(a);
    
  printf("Elements before sorting:\n");
  for (i = 0;i < MAX; i++)
    {
        printf(" %d", a[i]);
    }
    start1=start1+clock();
  
  
    insertion_sort(a);
  
 
   end1=end1+clock();
    printf("\n\nsorted elements:\n");
    for (i = 0;i < MAX; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n\n");
    printf("Time Taken is =%f\n",((float)(end1-start1))/CLOCKS_PER_SEC);
  //system("PAUSE");	
  return 0;
}
