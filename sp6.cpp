#include<iostream>
using namespace std;


class ArrayX
{
  public:
int *Arr;
int size;

ArrayX(int value)
{
  size=value;
  Arr=new int[size]; //5
}

~ArrayX()
{
  delete[]Arr;
}

void accept()
{
  cout<<"enter the values:"<<endl;
for(int i=0;i<size;i++)
{
  cin>>Arr[i];
}
}

void display()
{
cout<<"enter value are:"<<endl;
for(int i=0;i<size;i++)
{
  cout<<Arr[i]<<endl;
}
}

int maximum()
{
  int max=0;
  for(int i=0;i<size;i++)
{
   if(Arr[i]>max)
{
   max=Arr[i];
}
}
return max;
}


};

int main()
{
  ArrayX obj1(5);
obj1.accept();
obj1.display();
int ret=obj1.maximum();

cout<<"maximum is:"<<ret<<endl;

return 0;
}

 
