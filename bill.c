#include<stdio.h>
int main()
{
	float b,sur;
	int u;
	printf("Enter number of Units");
	scanf("%d",&u);
	if(u<=100)
	b=0.75*u;
	else if(u<=300)
	b=0.75*u+(u-200)*1.50;
	else
	b=0.75*u+200*1.50+(u-300)*3;
	if(b>1000 && b<=2000)
	sur=0.1*b;
	else if(b>2000)
	sur=0.2*b;
	b+=sur;
	printf("Bill = %f",b);
	printf("\nSurcharge = %f",sur);
	getch();
}
