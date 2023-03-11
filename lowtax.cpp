void lowesttax()
{
cout<<"Employee Information of low tax payer"<<endl;
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(e[i].tax>e[j].tax)
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
int main()
{
 cout<< "enter number of records”<<endl;
cin>>n;
input();
calculate();
sort();
display();
highesttax();
lowesttax();
return 0;
}
