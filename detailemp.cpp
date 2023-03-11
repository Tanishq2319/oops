void display()
{
cout<<"Employee Information"<<endl;
for(i=1;i<=n;i++)
{
cout<<"Employee name=";
cout<<e[i].empname;
cout<<endl<<"Empid=";
cout<<e[i].empid;
cout<<endl<<"Grade=";
cout<<e[i].grade;
cout<<endl<<"Basic salary=";
cout<<e[i].basic;
cout<<endl<<"Gross salary=";
cout<<e[i].grosssal;
cout<<endl<<"Net salary=";
cout<<e[i].netsal;
}
}
//3a. Display the employee details paying highest tax.
void highesttax()
{
cout<<"Employee Information of highest tax payer"<<endl;
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(e[i].tax<e[j].tax)
{
temp=e[i];
e[i]=e[j];
e[j]=temp;
}
cout<<"Employee name=";
cout<<e[i].empname;
cout<<endl<<"Empid=";
cout<<e[i].empid;
cout<<endl<<"Grade=";
cout<<e[i].grade;
cout<<endl<<"tax value=";
cout<<e[i].tax;
}
}
}
