#include<iostream>
using namespace std;
template<class T>

class arrayx
{
 private:
T *arr;
int size;

public:
arrayx(int value);
~arrayx();
void accept();
void display();
T maximum();
};

template<class T>
arrayx<T>::arrayx(int value)
{
size=value;
  arr=new T[size]; //5
}

template<class T>
arrayx<T>::~arrayx()
{
delete[]arr;
}

template<class T>
void arrayx<T>::accept()
{

  cout<<"enter the values:"<<endl;
for(int i=0;i<size;i++)
{
  cin>>arr[i];
}
}


template<class T>
void arrayx<T>::display()
{
cout<<"enter value are:"<<endl;
for(int i=0;i<size;i++)
{
  cout<<arr[i]<<endl;
}
}


template<class T>
T arrayx<T>::maximum()
{
T  max=0;
  for(int i=0;i<size;i++)
{
   if(arr[i]>max)
{
   max=arr[i];
}
}
return max;
}

int main()
{
 arrayx <int>obj(5);
obj.accept();
obj.display();
int ret= obj.maximum();

cout<<"maximum number is:"<<ret<<endl;
return 0;
}
