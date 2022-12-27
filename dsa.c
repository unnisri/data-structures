#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
int main()
{
    struct node *start, *r, *temp;
    int x = 1, value, y;

    start = NULL;
    printf("Inserting node in the dll\n");
    while (x == 1)
    {
        printf("for insertion at the begining , press 2\n");
        printf("for insertion at the end , press 3\n");
        scanf("%d", &y);
        while (y == 2)
        {
            printf("Enter the value to be inserted\n");
            scanf("%d", &value);
            if (start == NULL)
            {
                r = (struct node *)malloc(sizeof(struct node));
                r->data = value;
                r->prev = NULL;
                r->next = NULL;
                start = r;
            }
            else
            {
                temp = start;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                r = (struct node *)malloc(sizeof(struct node));
                r->data = value;
                r->prev = temp;
                temp->next = r;
                r->next = NULL;
            }
            printf("Want more nodes to be inserted at last ? press 2\n");
            scanf("%d", &y);
        }
        printf("Want more nodes to be inserted ? Press 1");
        scanf("%d",&x);
    }
        printf("\n");
        temp = start;
        int count = 0;
        while (temp != NULL)

        {
            printf(" %d <--> ", temp->data);
            temp = temp->next;
            count++;
        }

        printf("\nThe number of count is = %d\n", count);

        return 0;
    }
