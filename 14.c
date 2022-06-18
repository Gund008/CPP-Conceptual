#include<stdio.h>

void jwelersportal(int iweight)
{
switch(iweight)
{
case1:
printf("your bill amount is 4000\n");
break;

case 2:
printf("your bill amount is 8000\n");
break;

case 5:
printf("your bill amount is 20000\n");
break;

case 10:
printf("your bill amount is 40000\n");
break;

default:
printf("invalid weight\n");
}
}

int main()
{
int ivalue=0;
printf("enter the gold coin size that you want to purchese\n");
scanf("%d",&ivalue);

jwelersportal(ivalue);

 return 0;
}
