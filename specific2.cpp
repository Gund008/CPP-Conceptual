#include<iostream>
using namespace std;

template<class T>  //template header
void swapR(T *p,T *q)
{
T temp;
temp=*p;
*p=*q;
*q=temp;
}


int main()
{
int no1=11;
int no2=21;  //specific
cout<<"before swap data is:"<<no1<<"  "<<no2<<endl;
swapR(&no1,&no2);//call by address
cout<<"after swap data is:"<<no1<<" "<<no2<<endl;

float fno1=11.0;
float fno2=21.0;  //specific
cout<<"before swap data is:"<<fno1<<"  "<<fno2<<endl;
swapR(&fno1,&fno2);//call by address
cout<<"after swap data is:"<<fno1<<" "<<fno2<<endl;

char cno1='A';
char cno2='B';  //specific
cout<<"before swap data is:"<<cno1<<"  "<<cno2<<endl;
swapR(&cno1,&cno2);//call by address
cout<<"after swap data is:"<<cno1<<" "<<cno2<<endl;

  return 0;
}