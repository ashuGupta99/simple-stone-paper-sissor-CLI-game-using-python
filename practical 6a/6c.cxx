#include<iostream.h>
#include<conio.h>
//using abstract methods and classes
class figure
{
	public:
	double dim1;
	double dim2;
	figure(double a,double b)
	{
		dim1=a;
		dim2=b;
	}
	//pure virtual function
	virtual double area()=0;
};
          class rectangle:public figure
          {
          	public:
          	rectangle(double a,double b):figure(a,b)
          	{
          		
          	}
          	//impliment area for rectangle
          	
          	double area()
          	{
          		cout<<"\n inside area for rectangle:- ";
          		return dim1*dim2;
          	}
          };
          class triangle:public figure
          {
          	public:
          	triangle(double a,double b):figure(a,b)
          	{
          		
          	}
          	//impliment area for right triangle
          	
          	double area()
          	{
          		cout<<"\n inside area for triangle:- ";
          		return dim1*dim2/2;
          	}
          };
          
void main()
{
	clrscr();
	rectangle r(9,5);
	triangle t(10,8);
	cout<<r.area();
	cout<<t.area();
	getch();
}