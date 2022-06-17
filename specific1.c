#include<iostream>
using namespace std;

void swap(int *p,int *q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;
}


int main()
{
int no1=11;
int no2=21;  //specific
cout<<"before swap data is:"<<no1<<"  "<<no2<<endl;

swap(&no1,&no2);//call by address

cout<<"after swap data is:"<<no1<<" "<<no2<<endl;

  return 0;
}
