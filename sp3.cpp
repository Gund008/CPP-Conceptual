#include<iostream>
using namespace std;

template<class T>

T addtion(T A,T B)
{
  T ans;
  ans=A+B;
return ans;
}

int main()
{
int no1=11;
int no2=21;
int ret=0;
ret=addtion(no1,no2);
cout<<"addtion is:"<<ret<<endl;

float fno1=11.1;
float fno2=21.1;
float fret=0;
fret=addtion(fno1,fno2);
cout<<"addtion is:"<<fret<<endl;


  return 0;
}
