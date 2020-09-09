#include<iostream.h>
#include<conio.h>
class complex
{
	float n,m;
	public:
	void getdata()
	{
		cout<<"\ n Enter real number";
		cin>>n;
		cout<<"\n Enter imaginary number";
		cin>>m;
	}
	void showdata()
	{
		cout<<n<<"+j"<<m;
	}
	friend complex sum(complex, complex);
};
complex sum(complex c1,complex c2)
{ 
       complex c3;
       c3.n=c1.n+c2.n;
       c3.m=c1.m+c2.m;
       return c3;
}
void main()
{
	clrscr();
	complex obj1,obj2,obj3;
	cout<<"\n Enter the 1st complex number";
	cout<<"\n --------------------------\n ";
	obj1.getdata();
	cout<<"\n Enter the 2nd complex number";
	cout<<"\n --------------------------\n";
	obj2.getdata();
	obj3=sum(obj1,obj2);
	cout<<"\n------------------------------\n";
	cout<<"\n Complex number1";
	obj1.showdata();
	cout<<"\n Complex number2";
	obj2.showdata();
	cout<<"\n Complex number3";
	obj3.showdata();
	getch();
}