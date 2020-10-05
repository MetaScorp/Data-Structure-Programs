#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*start=NULL,*q,*t;

int main()
{
    int ch;
    void add_node_beg();
    void add_node_end();
    void display();
    void delete_node_beg();
    void delete_node_end();

    while(1)
    {
        printf("\n\n---- Singly Linked List Menu ----");
        printf("\n1.Add node at beg \n2.Add node at end Node\n3.Display\n4.Del node at beg\n5.Del node at end\n6.Exit\n\n");
        printf("Enter your choice(1-6):");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: add_node_beg();
                    break;
            case 2: add_node_end();
                    break;
            case 3: display();
                    break;
            case 4: delete_node_beg();
                    break;
            case 5: delete_node_end();
                    break;
            case 6: exit(0);
                    default: printf("Wrong Choice!!");
        }
    }
    return 0;
}

void add_node_beg()
{
    int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    t->data=num;

    if(start==NULL)
    {
        t->next=NULL;
        start=t;
    }
    else
    {
        t->next=start;
        start=t;
    }
}

void add_node_end()
{
    int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    t->data=num;
    t->next=NULL;

    if(start==NULL)
    {
        start=t;
    }
    else
    {
        q=start;
        while(q->next!=NULL)
        q=q->next;
        q->next=t;
    }
}

void display()
{
    if(start==NULL)
    {
        printf("List is empty!!");
    }
    else
    {
        q=start;
        printf("The linked list is:\n");
        while(q!=NULL)
        {
            printf("%d->",q->data);
            q=q->next;
        }
    }
}

void delete_node_beg()
{
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=start;
        start=start->next;
        printf("Deleted element is %d",q->data);
        free(q);
    }
}

void delete_node_end()
{
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=start;
        while(q->next->next!=NULL)
        q=q->next;

        t=q->next;
        q->next=NULL;
        printf("Deleted element is %d",t->data);
        free(t);
    }
}

