#include<stdio.h>
#include<conio.h>
void main()
{
    int a[]={45, 12, 17, 39, 2, 81, 3};;
    int i, j, temp, n=8;

    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i+1;j>=0;j--)
        {
            if(temp<a[j])
            {
                a[j+1]=a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d", a[i]);
    }
    getch();

}