//program to student record
#include<iostream>
using namespace std;
//declaring functions
int i,j,n;
void input();
void calculate();
void sort();
void display();
// structure declartion
struct student
{
int rollno;
char name[10];
int m[10],total;
float avg=0;
} s[3],temp;
//functions definition
void input()
{
for(i=1;i<=n;i++)
{
cout<<"enter rno,name";
cin>>s[i].rollno>>s[i].name;
cout<<"enter marks 5";
for(j=1;j<=5;j++)
{
cin>>s[i].m[j];
}
}
}
void calculate()
{
 int t=0;
for(i=1;i<=n;i++)
{
for(j=1;j<=5;j++)
{
t=t+s[i].m[j];
}
s[i].total= t;
s[i].avg=s[i].total/5;
}
}
void sort()
{
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(s[i].rollno>s[j].rollno)
{
temp=s[i];
s[i]=s[j];
s[j]=temp;;
}
}
}
}
void display()
{
cout<<"student Information"<<endl;
for(i=1;i<=n;i++)
{
cout<<"Rno=";
cout<<s[i].rollno;
cout<<endl<<"Name=";
cout<<s[i].name<<endl;
for(j=1;j<=5;j++)
{
cout<<"Mark "<<j<<"=";
cout<<s[i].m[j]<<endl;
}
cout<<endl<<"total=";
cout<<s[i].total;
cout<<endl<<"Average=";
cout<<s[i].avg<<endl;
}
}
int main()
{
cout<<"enter no of students records";
cin>>n;
input();
calculate();
sort();
display();
return 0;
}
