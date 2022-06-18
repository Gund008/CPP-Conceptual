#include<stdio.h>

void displayClass(float fmarks)
{
 if((fmarks>0.0)&&(fmarks<35.0))
{
   printf("you are fail\n");
}

else if((fmarks>=35.0)&&(fmarks<50.0))
{
 printf("pass class\n");
}

else if((fmarks>=50.0)&&(fmarks<60.0))
{
   printf("second class\n");
}

else if((fmarks>=60.0)&&(fmarks<70.0))
{
   printf("first class\n");
}

else if((fmarks>=70.0)&&(fmarks<70.0))
{
  printf("first class with disticntion\n");
}

else
{
  printf("invalid marks\n");
}
}

int main()
{
 float fvalue=0.0;
 printf("enetr the percentage\n");
 scanf("%f",&fvalue);

displayClass(fvalue);

  return 0;
}
