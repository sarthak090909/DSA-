#include<stdio.h>
int main()
{
    int i, j, temp, n=5;
    int a[]={55, 33, 22, 11, 44};

    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0;j--)
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
    return 0;
}