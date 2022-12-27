#include<stdio.h>
#include<stdlib.h>
struct stu
{
int fr_l;
struct stu *link;
};
int main()
{
    struct stu *s,*temp;
    s=NULL;
    int x;
    scanf("%d",&x);
    temp=(struct stu*)malloc(sizeof(struct stu));
    temp->fr_l=x;
    temp->link=NULL;
    s=temp;

    temp=(struct stu*)malloc(sizeof(struct stu));
    temp->fr_l=x+90;
    temp->link=NULL;
    s->link=temp;

    printf("%d %u\n",s->fr_l,s->link);
    s=s->link;
    printf("%d %u\n",s->fr_l,s->link);
    return 0;
}
