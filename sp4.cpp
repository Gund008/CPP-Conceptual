#include<iostream>
using namespace std;
template <class T>

void display(T arr[],int size)
{
   int i=0;
   for(i=0;i<size;i++)
   {
      cout<<arr[i]<<endl;
   }
}

int main()
{
int Brr[]={10,20,30,40,50};
display(Brr,5);

float Crr[]={10.11,20.11,30.11,40.11,55.11};
display(Crr,5);

return 0;
}
