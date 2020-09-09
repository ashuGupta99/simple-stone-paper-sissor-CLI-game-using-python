#include<iostream.h>
#include<conio.h>
class employee
{
	private:
	int emp_code,age;
	char name[30],qualification[30];
	
	public:
	void getdata()
	{
	cout<<"\n Enter employee's id:";
	cin>>emp_code;
	cout<<"\n Enter employee's name:";
	cin>>name;
	cout<<"\n Enter age of employee:";
	cin>>age;
	cout<<"\n Enter qualification of employee:";
	cin>>qualification;
	}
	void showdata()
	{
		cout<<"\n \n Employee id:"<<emp_code;
		cout<<"\t Name:"<<name;
		cout<<"\n Age:"<<age;
		cout<<"\t\t Qualification:"<<qualification;
	}
};
       class contract_employee:public employee
       {
       	int contract_id;
       	
       	public:
       	void getdata()
       	{
       		cout<<"\n Enter contract ID:";
       		cin>>contract_id;
       	}
       	void showdata()
       	{
       		cout<<"\n contract_id is:"<<contract_id;
       	}
       };
 
void main()
{
	clrscr();
	contract_employee ce;
	ce.getdata();
	ce.showdata();
	getch();
}