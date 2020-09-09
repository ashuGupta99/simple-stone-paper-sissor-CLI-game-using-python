#include<iostream.h>
#include<conio.h>
class My_Calculator
{
	int a,b,result;
	public:
	void getdata()
	{
		cout<<"\n enter two numbers for addition,  subtraction and multiplication\n "<<endl;
		cin>>a>>b;
	}
	 void add()
	{
		result=a+b;
		cout<<a<<"+"<<b<<" ="<<result<<endl;
	}
	void sub()
	{
		result=a-b;
		cout<<a<<"-"<<b<<"="<<result<<endl;
	}
		void mult()
	{
		result=a*b;
		cout<<a<<"*"<<b<<"="<<result<<endl;
	}
};
 
 void main()
 {
 My_Calculator a;
 
 a.getdata();
 cout<<"\n results(addition,subtraction,multiplication):"<<endl;
 a.add();

 a.sub();

 a.mult();
 getch();
 }
 