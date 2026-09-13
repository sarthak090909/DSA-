#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

struct node *start=0;


struct node *createNode()
{
    struct node *k1;

    k1=(struct node*)malloc(sizeof(struct node));

    printf("Enter a data: ");
    scanf("%d",&k1->data);

    k1->next=0;

    return k1;
}


void insertStart()
{
    struct node *b1;

    b1=createNode();

    if(start==0)
    {
        start=b1;
    }
    else
    {
        b1->next=start;
        start=b1;
    }
}


void insertEnd()
{
    struct node *x1,*v1;

    x1=createNode();

    if(start==0)
    {
        start=x1;
    }
    else
    {
        v1=start;

        while(v1->next!=0)
        {
            v1=v1->next;
        }

        v1->next=x1;
    }
}


void insertMiddle()
{
    struct node *b1,*b2;
    int d;

    b1=createNode();

    if(start==0)
    {
        start=b1;
        return;
    }

    printf("Enter a data where you want to store: ");
    scanf("%d",&d);

    b2=start;

    while(b2!=0 && b2->data!=d)
    {
        b2=b2->next;
    }

    if(b2==0)
    {
        printf("Data not found");
        free(b1);
        return;
    }

    b1->next=b2->next;
    b2->next=b1;

    printf("Node inserted Successfully");
}


void deleteStart()
{
    struct node *g1;

    if(start==0)
    {
        printf("There is no any node to delete");
    }
    else
    {
        g1=start;

        start=start->next;

        g1->next=0;

        free(g1);

        printf("Node deleted Successfully");
    }
}


void deleteEnd()
{
    struct node *p1,*p2;

    if(start==0)
    {
        printf("There is no any node to delete");
    }
    else if(start->next==0)
    {
        free(start);

        start=0;

        printf("Node deleted Successfully");
    }
    else
    {
        p1=start;

        while(p1->next->next!=0)
        {
            p1=p1->next;
        }

        p2=p1->next;

        p1->next=0;

        free(p2);

        printf("Node deleted Successfully");
    }
}


void deleteMiddle()
{
    struct node *p1,*p2;
    int d;

    if(start==0)
    {
        printf("There is no any node to delete");
        return;
    }

    printf("Enter a data after which you want to delete: ");
    scanf("%d",&d);

    p1=start;

    while(p1!=0 && p1->data!=d)
    {
        p1=p1->next;
    }

    if(p1==0)
    {
        printf("Data not found");
        return;
    }

    if(p1->next==0)
    {
        printf("There is no node after this node to delete");
        return;
    }

    p2=p1->next;

    p1->next=p2->next;

    p2->next=0;

    free(p2);

    printf("Node deleted Successfully");
}


void display()
{
    struct node *d1;

    if(start==0)
    {
        printf("There is no any node to display");
    }
    else
    {
        d1=start;

        while(d1!=0)
        {
            printf("%d -> ",d1->data);

            d1=d1->next;
        }

        printf("NULL");
    }
}


void main()
{
    int ch;

    printf("\n1.Insert from start.");
    printf("\n2.Insert from end.");
    printf("\n3.Insert from middle.");
    printf("\n4.Delete from start.");
    printf("\n5.Delete from end.");
    printf("\n6.Delete from middle.");
    printf("\n7.Display");
    printf("\n8.Exit");


    while(1)
    {
        printf("\n\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            {
                insertStart();
                break;
            }

            case 2:
            {
                insertEnd();
                break;
            }

            case 3:
            {
                insertMiddle();
                break;
            }

            case 4:
            {
                deleteStart();
                break;
            }

            case 5:
            {
                deleteEnd();
                break;
            }

            case 6:
            {
                deleteMiddle();
                break;
            }

            case 7:
            {
                display();
                break;
            }

            case 8:
            {
                exit(0);
            }

            default:
            {
                printf("Enter a valid input: ");
            }
        }
    }

    getch();
}