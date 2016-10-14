#include<stdio.h>
void choise(double *a,double *b,int n)
{
    int i,j,k;
    double temp1,temp2;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[k]>a[j]) k=j;
            if(i!=k)
            {
                temp1=a[i];
                a[i]=a[k];
                a[k]=temp1;
                temp2=b[i];
                b[i]=b[k];
                b[k]=temp2;
            }
        }
    }
}
int main()
{
    int sort,need;
    double t_price,price[1000],money=0,amount[1000],t_amount=0;
    int i=0,j=0,k=0;
    scanf("%d%d",&sort,&need);
    for(i=0;i<sort;i++)
    {
        scanf("%lf",&amount[i]);
        t_amount+=amount[i];
    }
    for(j=0;j<sort;j++)
    {
        scanf("%lf",&t_price);
        price[j]=t_price/amount[j];
    }
    choise(price,amount,sort);
    i--;
    j--;
    if(need>t_amount)
    {for(k=i;k>=0;k--)
    {
      money+=amount[k]*price[k];
    }
    }
    else
    {
    for(i;need!=0;i--)
    {
        if(amount[i]<need)
        {
            need-=amount[i];
        }
        else
        {
            amount[i]=need;
            need=0;
        }
    }
    for(j;j>i;j--)
    {
        money+=price[j]*amount[j];
    }
    }
    printf("%.2lf",money);
    return 0;
}
