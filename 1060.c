#include<stdio.h>
void sort(int*a,int n)
{
    int i,j,min,t;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
            if(a[min]>a[j])
                min=j;
        if(min!=i)
        {
            t=a[min];
            a[min]=a[i];
            a[i]=t;
        }
    }
}
int main()
{
    int n,i,j,e=0;
    int p[200000];
    scanf("%d",&n);
    j=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    sort(p,n);
    while(e<p[j]&&j>=0)
    {
        e++;
        j--;
    }
    if(e == p[j+1])
    {
        e--;
    }
    printf("%d",e);
    return 0;
}
