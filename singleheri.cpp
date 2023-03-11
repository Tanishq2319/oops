#include <iostream>
using namespace std;
class employee1 //single base class
{
 public:
 int eno;
 char name[20], des[20];
 float bp, hra, da, pf, np;
 void getdata() {
 cout << "Enter the employee name:";
 cin>>name;
 cout << "Enter the designation:";
 cin>>des;
 cout << "Enter the basic pay:";
 cin>>bp;
 cout << "Enter the Humen Resource Allowance:";
 cin>>hra;
 cout << "Enter the Dearness Allowance :";
 cin>>da;
 cout << "Enter the Profitablity Fund:";
 cin>>pf;
 }
 
 void calculate() 
 {
 np = bp + hra + da - pf;
 }
 };
 
class employee2 : public employee1 //single derived class
{
 private:
 float y;
 public:
 void data()
 {
 cout << "Enter the salse percentage= "; cin >> y;
 }
 void display()
 {
 cout << "\t Name " << name<< "\n";
 cout<< "\t Designation " << "\t" << des<< "\n";
 cout<<"\t Basic Pay " << bp<< "\n";
 cout<< "\t HRA " << hra<< "\n";
 cout<< "\t DA " << da<< "\n";
 cout<< "\t PF " << pf<< "\n";
 cout<< "\t Gross Pay " << np << "\n"<< "\n";
 cout << "Net Pay = " << (np+((np * y)/100));
 }
};
int main()
{
 employee2 a; //object of derived class
 a.getdata();
 a.calculate();
 a.data();
 a.display();
 return 0;
} 
