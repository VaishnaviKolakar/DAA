#include<stdio.h>
int main(){
   int a,b,rem;
   printf("enter any two numbers:");
   scanf("%d%d",&a,&b);
   while(b!=0) //check for b=0 condition because in a/b ,b should not equal to zero{
      rem=a % b;
      a=b;
      b=rem;
   }
   printf("GCD of two numbers is:%d
",a);
   return 0;
}