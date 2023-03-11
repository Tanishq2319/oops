class distances
{
 int feet; 
 float inches; 
 public:
 distances()
 {
 feet=0;
 inches= 0.0;
 }
 void getter(); 
 void setter(); 
 void display();
};
void distances::getter ()
{
 cout<<"enter feet and inches:";
 cin>>feet>>inches;
}
void distances::setter() 
{
 while(inches>=12)
 {
 inches= inches-12;
 feet++;
 }
}
void distances::display()
{
 cout<<"feet: "<<feet<<endl; 
 cout<<"inches:"<<inches<<endl;
}
int main()
{
distances d1;
d1.getter();
d1.setter();
d1.display();
return 0;
}
