#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j, n, min, index, t;
    int a[50];
    printf("Enter a range: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++)
    {
        min=a[i];
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                index=j;
            }
        }
        t=a[i];
        a[i]=a[index];
        a[index]=t;
    }
for(i=0;i<n;i++)
{
    printf("%d", a[i]);
}

getch();

}