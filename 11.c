#include<stdio.h>
int ChkEven(int ino)
{
  if((ino%2)==0)
  {
  return 1;
  }
  else
  {
     return 0;
  }
}

int main()
{
int ivalue=0;
int iret=0;

printf("enter number\n");
scanf("%d",&ivalue);

iret=ChkEven(ivalue);

if(iret==1)
{
  printf("%d is even number\n",ivalue);
}
else
{
 printf("%d is odd number\n",ivalue);
}

 return 0;
}
