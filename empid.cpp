//program to Employee record
#include<iostream>
using namespace std;
//declaring functions
int i,j,n;
void input();
void calculate();
void sort();
void display();
void highesttax();
void lowesttax();
// structure declartion
struct employee
{
int empid;
char empname[10];
int grade;
float da,hra,tax,basic,grosssal,netsal;
} e[10],temp;
//functions definition
// get values from user
void input()
{
for(i=1;i<=n;i++)
{
cout<<"enter empid ,empname";
cin>>e[i].empid>>e[i].empname;
cout<<"enter grade";
cin>>e[i].grade;
}
}
void calculate()
{
for(i=1;i<=n;i++)
{
// basic 
if (e[i].grade==1)
e[i].basic=30000;
else if (e[i].grade==2)
e[i].basic=25000;
else if (e[i].grade==3)
e[i].basic=20000;
else if (e[i].grade==4)
e[i].basic=15000;
else
cout<< " grade sholud within 1-4";
//hra,da
e[i].hra =(e[i].basic)*(0.25);
e[i].da= (e[i].basic)*(0.20);
//gross salary
e[i].grosssal= e[i].basic+ e[i].hra+ e[i].da;
//tax
if (e[i].grosssal <=40000)
e[i].tax=0;
if ((e[i].grosssal >40000) && (e[i].grosssal <=75000))
e[i].tax= e[i].grosssal *(0.10);
if ((e[i].grosssal >75000))
e[i].tax= e[i].grosssal *(0.15);
//netsalary
cout<<e[i].tax;
e[i].netsal= e[i].grosssal- e[i].tax;
}
}
// 1.Sort the employee details based on emp id
void sort()
{
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(e[i].empid>e[j].empid)
{
temp=e[i];
e[i]=e[j];
e[j]=temp;
}
}
}
}
