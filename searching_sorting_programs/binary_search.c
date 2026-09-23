#include<stdio.h>
int main()
{
    int a[50];
    int i, l, r, n, m, search;

    printf("Enter a range: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for(i=0;i<n;i++)
    {
    scanf("%d", &a[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &search);

    l=0;
    r=n-1;

    while(l<=r)
    {
        m=l+r/2;
        if(a[m]==search)
        {
            printf("The number found at index: %d", m+1);
            break;
        }
        else if(a[m]<search)
        {
            l=m+1;
        }
        else if(a[m]>search)
        {
            r=m-1;
        }
    }
    if(l>r)
    {
        printf("No not found: ");
    }
    return 0;
}