#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int info;
    struct node *next;
};

struct node *head = NULL;

/* Create Node */
struct node *cn()
{
    struct node *g1;

    g1 = (struct node *)malloc(sizeof(struct node));

    printf("Enter a data: ");
    scanf("%d", &g1->info);

    g1->prev = NULL;
    g1->next = NULL;

    return g1;
}

/* Insert Start */
void is()
{
    struct node *s1;

    s1 = cn();

    if (head == NULL)
    {
        head = s1;
    }
    else
    {
        s1->next = head;
        head->prev = s1;
        head = s1;
    }
}

/* Insert End */
void ie()
{
    struct node *j1, *h1;

    j1 = cn();

    if (head == NULL)
    {
        head = j1;
    }
    else
    {
        h1 = head;

        while (h1->next != NULL)
        {
            h1 = h1->next;
        }

        j1->prev = h1;
        h1->next = j1;
    }
}

/* Insert Middle - after a given data */
void im()
{
    struct node *m1, *b1;
    int d;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("Enter the data after which you want to insert: ");
    scanf("%d", &d);

    m1 = head;

    while (m1 != NULL && m1->info != d)
    {
        m1 = m1->next;
    }

    if (m1 == NULL)
    {
        printf("Data not found.\n");
        return;
    }

    b1 = cn();

    b1->prev = m1;
    b1->next = m1->next;

    if (m1->next != NULL)
    {
        m1->next->prev = b1;
    }

    m1->next = b1;
}

/* Delete Start */
void ds()
{
    struct node *g1;

    if (head == NULL)
    {
        printf("There is no any node to delete.\n");
    }
    else
    {
        g1 = head;
        head = head->next;

        if (head != NULL)
        {
            head->prev = NULL;
        }

        free(g1);

        printf("Node Deleted Successfully.\n");
    }
}

/* Delete End */
void de()
{
    struct node *u1;

    if (head == NULL)
    {
        printf("There is no any node to delete.\n");
    }
    else
    {
        u1 = head;

        while (u1->next != NULL)
        {
            u1 = u1->next;
        }

        if (u1->prev == NULL)
        {
            /* Only one node */
            head = NULL;
        }
        else
        {
            u1->prev->next = NULL;
        }

        free(u1);

        printf("Node Deleted Successfully.\n");
    }
}

/* Delete Middle - delete by data */
void dm()
{
    int d;
    struct node *u1;

    if (head == NULL)
    {
        printf("There is no any node to delete.\n");
        return;
    }

    printf("Enter a data that you want to delete: ");
    scanf("%d", &d);

    u1 = head;

    while (u1 != NULL && u1->info != d)
    {
        u1 = u1->next;
    }

    if (u1 == NULL)
    {
        printf("Data not found.\n");
        return;
    }

    /* If deleting first node */
    if (u1->prev == NULL)
    {
        head = u1->next;

        if (head != NULL)
        {
            head->prev = NULL;
        }
    }
    else
    {
        u1->prev->next = u1->next;

        if (u1->next != NULL)
        {
            u1->next->prev = u1->prev;
        }
    }

    free(u1);

    printf("Node Deleted Successfully.\n");
}

/* Display */
void display()
{
    struct node *b1;

    if (head == NULL)
    {
        printf("There is no any node to display.\n");
    }
    else
    {
        b1 = head;

        printf("Doubly Linked List: ");

        while (b1 != NULL)
        {
            printf("%d ", b1->info);
            b1 = b1->next;
        }

        printf("\n");
    }
}

/* Main */
int main()
{
    int ch;

    while (1)
    {
        printf("\n\n----- DOUBLY LINKED LIST -----\n");
        printf("1. Insert Start\n");
        printf("2. Insert End\n");
        printf("3. Insert Middle\n");
        printf("4. Delete Start\n");
        printf("5. Delete End\n");
        printf("6. Delete Middle\n");
        printf("7. Display\n");
        printf("8. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                is();
                break;

            case 2:
                ie();
                break;

            case 3:
                im();
                break;

            case 4:
                ds();
                break;

            case 5:
                de();
                break;

            case 6:
                dm();
                break;

            case 7:
                display();
                break;

            case 8:
                exit(0);

            default:
                printf("Invalid Input.\n");
        }
    }

    return 0;
}