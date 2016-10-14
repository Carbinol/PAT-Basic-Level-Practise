#include<stdio.h>
void print(int n)
{
	switch(n)
	{
		case 0:printf("ling");break;
		case 1:printf("yi");break;
		case 2:printf("er");break;
		case 3:printf("san");break;
		case 4:printf("si");break;
		case 5:printf("wu");break;
		case 6:printf("liu");break;
		case 7:printf("qi");break;
		case 8:printf("ba");break;
		case 9:printf("jiu");break;
		default:break;
	}
}
int main()
{
    char n;
	int i=0;
	int h,t,o;
	scanf("%c",&n);
	while(n>=48 && n<=57)
	{
		i+=(n-48);
		scanf("%c",&n);
	}
	h=i/100;
	t=(i/10)%10;
	o=i%10;
	if(h!=0)
	{
		print(h);
		printf(" ");
		print(t);
		printf(" ");
	}
	else if(t!=0)
	{
		print(t);
		printf(" ");
	}
	print(o);
	return 0;
}
