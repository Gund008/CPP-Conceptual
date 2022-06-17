#include<iostream>
using namespace std;

class arrayx
{
 public:
int *arr;
int size;

arrayx(int value);
~arrayx();
void accept();
void display();
int maximum();

};
arrayx::arrayx(int value)
{
size=value;
  arr=new int[size]; //5

}
arrayx::~arrayx()
{
delete[]arr;
}
void arrayx::accept()
{

  cout<<"enter the values:"<<endl;
for(int i=0;i<size;i++)
{
  cin>>arr[i];
}

}
void arrayx::display()
{
cout<<"enter value are:"<<endl;
for(int i=0;i<size;i++)
{
  cout<<arr[i]<<endl;
}

}
int arrayx::maximum()
{
int max=0;
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
 arrayx obj(5);
obj.accept();
obj.display();
int ret= obj.maximum();

cout<<"maximum number is:"<<ret<<endl;
return 0;
}
