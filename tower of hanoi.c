int main(void)
{
    int n=3;
    char source='A',dest='C',temp='B';
    toh(n,'A','B','C');
    //tofh(n,source,temp,dest);
    return 0;
}
void toh(int n,char source,char dest,char temp)
{
    if(n>0)
    {
        toh(n-1,source,dest,temp);
        printf("move disk from %c to %c\n",source,dest);
        toh(n-1,temp,source,dest);
    }
}

void tofh(int ndisk,char source,char temp,char dest)
{
    if(ndisk==1)
    {
        printf("move disk %d from %c to %c\n",ndisk,source,dest);


    }
    else
    {
        tofh(ndisk-1,dest,temp,source);
        printf("move disk %d from %c to %c\n",ndisk,source,dest);
        tofh(ndisk-1,dest,temp,source);
    }
}
