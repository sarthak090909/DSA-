#include<stdio.h>
int main()
{
    int i, r, search;
    int arr[50];

    printf("Enter the range: ");
    scanf("%d",&r);
    printf("Enter %d numbers to store in array: ", r);
    for(i=0;i<r;i++)
    {
    scanf("%d", &arr[i]);
    }

    printf("Enter the number that you want to search: ");
    scanf("%d", &search); 

    for(i=0;i<r;i++)
    {
        if(search==arr[i])
        {
            printf("Number %d found at index %d",arr[i], i+1);
            break;
        }
    }
    if(i==r)
    {
        printf("Number not found: ");
    }
    return 0;
}