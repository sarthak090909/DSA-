#include<stdio.h>
#include<conio.h>
void quick_sort(int a[], int n)
{
    int top=-1;
    int beg;
    int end;
    int pivot;
    int lower[20];
    int upper[20];

    if(n>1)
    {
        top++;
        lower[top]=0;
        upper[top]=n-1;
    }

    while(top!=-1)
    {
        beg=lower[top];
        end=upper[top];
        top--;
        pivot=quick(a, beg, end, pivot);
        if(beg<pivot-1)
        {
            top++;
            lower[top]=beg;
            upper[top]=pivot-1;
        }
        if(pivot+1<end)
        {
            top++;
            lower[top]=pivot+1;
            upper[top]=end;
        }
    }

}

int quick(int a[], int beg, int end, int pivot)
{
    int l, r, t;
    l=beg;
    r=end;
    pivot=l;
    
    s1:while(a[pivot]<=a[r] && pivot!=t)
    {
        r--;
    }
    if(pivot==r)
    {
        return pivot;
    }
    if(a[pivot]>a[r])
    {
        t=a[pivot];
        a[pivot]=a[r];
        a[r]=t;
        pivot=r;
    }
    while(a[pivot]>=a[l] && pivot!=l)
    {
        l++;
    }
    if((pivot==l))
    {
        return pivot;
    }
    if(a[pivot]<a[l])
    {
        t=a[pivot];
        a[pivot]=a[l];
        a[l]=t;
        pivot=l;
    }
    goto s1;
}

void main()
{
    int a[]={77, 44,11, 78, 2, 91, 74, 20, 50, 2};
    int n=10,i;
    quick_sort(a, n);
    for(i=0;i<n;i++)
    {
        printf("%d", a[i]);
    }
    getch();
}