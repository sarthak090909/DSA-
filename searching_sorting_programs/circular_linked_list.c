#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *start=NULL;

node *cn()
{
    node *g1;

    g1=(node *)malloc(sizeof(node));

    printf("Enter a date:");
    scanf("%d",&g1->data);

    g1->next=NULL;

    return g1;
}

is()
{
    node *t1;

    t1=cn();
    if(start==NULL)
    {
        t1=start;
    }
    else
    {
        t1->next=start;
        start=t1;
    }
}

im()
{
    int d, i;
    node *j1, *j2, *j3;

    j1=cn();

    if(start==NULL)
    {
        start=j1;
    }
    else
    {
        j2=start;

        printf("Enter where you want to insert: ");
        scanf("%d", &d);

        for(i=0;i<d-1;i++)
        {
            j2=j2->next;
        }
        j3=j2->next;
        j2->next=j1;
        j1->next=j3;
    }
}

ie()
{   
    
}

ds()
{

}

dm()
{

}

de()
{

}

void main()
{
    int ch;

    printf("\n 1.Insert Start");
    printf("\n 2.Insert Middle");
    printf("\n 3.Insert End");
    printf("\n 4.Delete Start");
    printf("\n 5.Delete Middle");
    printf("\n 6.Delete End");
    printf("\n 7.Display");
    printf("Exit");

    switch(ch)
    {
        case 1:
        {
            is();
            break;
        }

        case 2:
        {
            im();
            break;
        }

        case 3:
        {
            ie();
            break;
        }

        case 4:
        {
            ds();
            break;
        }

        case 5:
        {
            dm();
            break;
        }

        case 6:
        {
            de();
            break;
        }

        case 7:
        {
            display();
            break;
        }

        case 8:
        {
            Exit(0);
        }
    }
}