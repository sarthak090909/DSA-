#include<stdio.h>
int main()
{
    int r, i, search;
    int a[20];
    printf("Enter a range: ");
    scanf("%d", &r);
    printf("Enter the numbers: ",r);
    for(i=1;i<r;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &search);

    for(i=0;i<r;i++)
    {
        if(search==a[i])
        {
            printf("Number is found at position %d",i+1);
            break;
        }
        if(i==r)
        {
            printf("Number not found");
        }

    }
    return 0;

}