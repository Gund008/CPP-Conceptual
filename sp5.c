#include<iostream>
using namespace std;

int maximum(int ivalue)
{
 int icnt=0;
printf("enter the number of array element\n");


for(icnt=0;icnt<ivalue;icnt++)
{
  scanf("%d\n",icnt);
}
return icnt;
}
   

int main()
{
int size=0;
int ret=0;
printf("enter the number of array\n");
scanf("%d\n",&size);

ret=maximum(size);
printf("maximum number is:%d\n",ret);

  return 0;
}
