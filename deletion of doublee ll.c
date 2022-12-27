#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main()
{
    int x=1,value;
    struct node *front,*rear,*temp,*r;
    front=rear=NULL;

    printf("enqueue opnen in circular queue via dll\n");

    while(x==1)
    {
        printf("enter the value to be enqueued\n");
        scanf("%d",&value);

        if(front==NULL)
        {
            r=(struct node*)malloc(sizeof(struct node));
            r->data=value;
            r->prev=NULL;
            r->next=NULL;
            front=rear=r;

        }
        else
        {
            if(front->next==NULL)
            {
                r=(struct node*)malloc(sizeof(struct node));
                r->data=value;
                r->prev=rear;
                r->next=front;
                front->prev=r;
                rear->next=r;
                rear=r;
            }
            else
            {
                r=(struct node*)malloc(sizeof(struct node));
                r->data=value;
                r->next=front;
                r->prev=rear;
                rear->next=r;
                front->prev=r;
                rear=r;

            }
        }

        printf("want to enqueue more nodes/value?press 1\n");
        scanf("%d",&x);
    }


    int count=0;
    struct node *p=NULL;
    temp=front;

    while(temp!=p)
    {
        printf("%d <-->",temp->data);
        temp=temp->next;
        p=front;
        count++;
    }

    printf("\n number of nodes in circular queue via d11 is\n");
    printf("%d\n",count);
    printf("deque opn in circular queue via dll\n");
    x=1;
    while (x == 1)
    {
        printf("enter the value to be enqueued\n");
        scanf("%d", &value);

        if (front == NULL)
        {
           printf("circular queue is empty\n");
           break;
        }
        else
        {
            if (front==rear)
            {
                temp = front;
                front = rear = NULL;
                free(temp);
            }

            else
            {
                temp = front;
                front = front -> next;
                rear -> next = front;
                front ->prev = rear;
                free(temp);
            }
        }
        printf("want more nodes to be dequeued?press 1\n");
        scanf("%d", &x);
    }
    return 0;
}
