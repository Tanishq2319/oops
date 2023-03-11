#include <iostream>
using namespace std;
template <class T>
int swapping(T& x, T& y)
{
 T t;
 t = x;
 x = y;
 y = t;
 return 0;
}
int main()
{
 int a, b;
 cout<<"enter a and b values\n";
 cin>>a>>b;
 cout<<"Before swapping"<<" "<<a<<" "<<b<<endl;
 swapping(a, b);
 cout <<"After Swapping"<<" "<< a << " " << b << endl;
 return 0;
}
