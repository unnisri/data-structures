#include<stdio.h>
int main()
{
    int s=0,f=1,n,i;
    printf("enter the value");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        f=f*i;
        s=s+f;
    }
    printf("%d",s);
    return 0;
}
