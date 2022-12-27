#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void insert(struct node **,int);
int count(struct node *);
int main()
{
    struct node *start;
    start=NULL;
    int x=1,value;

    printf("insertion at the last in the 11 using recursion\n");

    while(x==1)
    {
        printf("enter the value to be inserted");
        scanf("%d",&value);

        insert(&start,value);
        printf("want another value to be inserted? 1\n");
        scanf("%d",&x);

    }
    struct node *temp;
    temp=start;

    while(temp!=NULL)
    {
        printf("%d-->",temp->data);
        temp=temp->link;
    }
    int count_11 = count(start);
    return 0;
}

void insert (struct node **q,int #include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void insert(struct node **,int);
int count(struct node *);
int main()
{
    struct node *start,count;
    start=NULL;
    int x=1,value;

    printf("insertion at the last in the 11 using recursion\n");

    while(x==1)
    {
        printf("enter the value to be inserted");
        scanf("%d",&value);

        insert(&start,value);
        printf("want another value to be inserted? 1\n");
        scanf("%d",&x);

    }
    struct node *temp;
    temp=start;

    while(temp!=NULL)
    {
        printf("%d-->",temp->data);
        temp=temp->link;
    }
    int count_11 = count(start);
    return 0;
}

void insert (struct node **q,data)
{
    if((*q)==NULL)
    {
        struct node *r;
        r=(struct node*)malloc(sizeof(struct node));
        r->data=data;
        (*q)=r;
        (*q)->link=NULL;
    }
    else
    {
        insert(&((*q)->link),data);
    }
}
int count(struct node *q)
{
    if(q==NULL)
    {
        return 0;
    }
    else
    {
        return 1+ count(q->link);
    }
}
data)
{
    if((*q)==NULL)
    {
        struct node *r;
        r=(struct node*)malloc(sizeof(struct node));
        r->data=data;
        (*q)=r;
        (*q)->link=NULL;
    }
    else
    {
        insert(&((*q)->link),data);
    }
}
int count(struct node *q)
{
    if(q==NULL)
    {
        return 0;
    }
    else
    {
        return 1+ count(q->link);
    }
}
