#include<stdio.h>
#include<stdlib.h>
struct node{
int d;
struct node *link;
};
void countofnode(struct node *head)
{
int count=0;
if(head==NULL)
{
printf("node is empty\n");
} struct node *ptr=NULL;
ptr=head;
while(ptr!=NULL)
{
count ++;
ptr=ptr->link;

}
printf("the total no. of node present\n",count);
}
void printdata(struct node *head)
{
if (head==NULL)
{ printf("linked is empty");}
struct node *ptr=NULL;
ptr=head;
while(ptr!=NULL)
{
    printf("%d\n",ptr->d);
    ptr=ptr->link;
}

}
//add number at begining
void addbeg(struct node **head,int d)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->d=d;
    ptr->link=NULL;
    ptr->link=*head;
    *head=ptr;

}
struct node* delfirstnode(struct node *head)
{
if(head==NULL)
    {printf("list is empty");
    }
else 
{
struct node *temp;
temp=head;
head=head->link;
free(temp);

}
return head;
}
struct node* reverse(struct node *head)
{
struct node *prev=NULL;
struct node *next=NULL;
while(head!=NULL)
{
    next=head->link;
    head->link=prev;
    prev=head;
    head=next;
}
head=prev;
return head;
}

int main()
{
int d=90;
struct node *head;
head=NULL;
head=(struct node*)malloc(sizeof(struct node));
head->d=69;
head->link=NULL;
struct node *current=NULL;
current=(struct node*)malloc(sizeof(struct node));
current->d=90;
current->link=NULL;
head->link=current;
countofnode(head);
printf("the data present initially\n");
printdata(head);
printf("the data entered begi\n");
addbeg(&head,d);
printf("resverse the node\n");
head=reverse(head);
printdata(head);
printf("delete the first node");
head=delfirstnode(head);
printdata(head);
return 0;
}