#include<iostream.h>
#include<conio.h>
#include<math.h>
class arm
{
	int no,copy,re,n=0,ans=0;
	public:
	void getdata()
	{
	cout<<"enter any number ";
	cin>>no;
	}
	
	void isarmstrong()
	{
		copy=no;		
		while(copy!=0)
		{
			copy=copy/10;
			n++;
		}
		
		copy=no;
		while(copy!=0)
		{
			re=copy%10;
			ans=ans+pow(re,n);
			copy=copy/10;
		}
		
			
	          if(ans==no)
		   	{
		   		cout<< no <<"is armstrong";
		   	}
		   	else
		   	{
		   		cout<< no <<" is not armstrong";
		   	}
	}
		  
};

void main()
{
	clrscr();
	arm a;
	a.getdata();
	a.isarmstrong();	
	getch();
}
