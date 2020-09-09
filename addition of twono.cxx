#include<iostream.h>
#include<conio.h>

int a,b,s;
int calc(int);
int calc(int,int);
void main()
{
	clrscr();
	
	cout<<"enter a number"<<endl;
	cin>>s;
	cout<<"square"<<"("<<s<<"x"<<s<<")"<<"="<<calc(s)<<endl;
//	cout<<s<<"x"<<s<<"="<<calc(s)<<endl;
	
	cout<<"enter any two number " <<endl;
	cin>>a>>b;
cout<<"addition"<<"("<<a<<"+"<<b<<")"<<"="<<calc(a,b);
//	cout<<a<<"+"<<b<<"="<<calc(a,b);
	getch();
}
	

 
 int calc(int x)
 {
 	x=s;
 	return (x * x);
 }
 
 int calc(int x,int y)
 {
 	x=a;
 	y=b;
 	return (x + y);
 }
