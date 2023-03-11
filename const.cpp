include<iostream>
using namespace std;
class AreaofRect
{
 private:
 int length;
 int breadth;
 public:
 
 AreaofRect (int l,int b)
 { int c;
 length=l;
 breadth=b;
 c=length * breadth;
 cout<<"area of rectanlge="<<c<<endl;
 }
 int display()
 {
 cout<<"length="<<length<<endl;
 cout<<"breadth="<<breadth;
 }
};
int main ()
{
 AreaofRect R(2,2);
 R.display();
 
 return 0;
}
