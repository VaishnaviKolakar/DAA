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
    }
}



void merge(int arr[],int low,int mid,int high)
{
 int i,j,k,l,b[MAX];
 l=low;

 i=low;
 j=mid+1;
 while((l<=mid)&&(j<=high))
   {
    if(arr[l]<=arr[j])
      {
       b[i]=arr[l];
       l++;
      }
    else
      {
       b[i]=arr[j];
       j++;
      }
    i++;
   }
 if(l>mid)
   {
    for(k=j;k<=high;k++)
       {
	b[i]=arr[k];
	i++;
       }
   }
 else
   {
    for(k=l;k<=mid;k++)
       {
	b[i]=arr[k];
	i++;
       }
   }
 for(k=low;k<=high;k++)
    {
     arr[k]=b[k];
    }
}

void mergesort(int arr[],int low,int high)
{
 int mid;
 if(low<high)
   {
    mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
   }
}


int main(int argc, char *argv[])
{
  int arr[MAX];
  int n,i;
  clock_t start1=0,end1=0;
  getdata(arr);
 //sequential
  start1=start1+clock();

    mergesort(arr,0,MAX-1);

  end1=end1+clock();
  printf("Time Taken is =%f\n",((float)(end1-start1))/CLOCKS_PER_SEC);

  
  return 0;
}
