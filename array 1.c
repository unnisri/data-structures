#include<stdio.h>
int reverse(int arr[],int n);
int main()
{
    int reverse[]={1,2,3,4,5};
    printf("%d\n",reverse[5]);
    return 0;
}
int reverse(int arr[],int n)
{

    for(int i=0;i<n/2;i++)
    {
        first val=arr[i];
        second val=arr[n-i-1];

        arr[i]=secondval;
        arr[n-i-1]=firstval;
    }
}
