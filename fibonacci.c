#include<stdio.h>
int main()
{
    int fib=1,i=1,j,n;
    printf("enter the number");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      if(n==0||n==1)
      {
        return 1;
      }
      else
      {
        return fib(n-1)+fib(n-2);

      }
    }
}
