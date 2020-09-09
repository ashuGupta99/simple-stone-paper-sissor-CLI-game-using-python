#include<iostream.h>
#include<conio.h>
class calculator
{
	float a,b;
	public:
	void getdata()
	{
		cout<<"enter two numbers\n ";
		cin>>a>>b;
	}
	void sum()
	{
		cout<<a<<"+"<<b<<"="<<a+b;
	}
	
	
	void sub()
	{
		cout<<a<<"-"<<b<<"="<<a-b;
	}
		
	void mult()
	{
		cout<<a<<"x"<<b<<"="<<a*b;
	}
		
	void div()
	{
		cout<<a<<"÷"<<b<<"="<<a/b;
	}
};

void main()
{
		
	calculator a;
	char mychar;
	cout<<"\n enter symbols accordind to your requrenments\n + for addition \n - for subtraction \n x for multiplication \n / for division\n\n\n ";
	cin>>mychar;
	switch(mychar)
	{
	case '+':
	a.getdata();
	a.sum();
	break;
	
	case '-':
	a.getdata();
	a.sub();
	break;
	
	case 'x':
	a.getdata();
	a.mult();
	break;
	
	case '/':
	a.getdata();
	a.div();
	break;
	
	default:
	cout<<"invalid word thank you"; 
	
	}
	
	getch();
}

/*	char mychar[50];
		cout<<"\n enter your reqirenment reletede word (add for addition,sub for subtraction,mult for multiplication and div for division";
	cin>>mychar;
	if(mychar='add')
	{
		a.getdata();
		a.sum();
	}
	else if(mychar='sub')
	{
		a.getdata();
		a.sub();
	}
	else if(mychar='mult')
	{
		a.getdata();
		a.mult();
	}
	else if(mychar='div')
	{
		a.getdata();
		a.div();
	}
	else
	{
		cout<<"\n agair run and enter currect key";
	}

	getch();
}
*/