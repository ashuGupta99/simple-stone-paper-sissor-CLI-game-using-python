#include<iostream.h>
#include<conio.h>
class course
{
	private:
	char course_name[100],college_name[20],student_name[10];
	int marks;
	void getInfo()
	{
		cout<<"\n enter your name :";
		cin>>student_name;
		cout<<"\n enter name of course:"<<endl;
		cin>>course_name;
		cout<<"\n enter narks in course:"<<endl;
		cin>>marks;
		cout<<"\n enter your college name:"<<endl;
		cin>>college_name;
	}
	public:
void displayInfo()
	{
		getInfo();
			cout<<"\n information about your course:"<<endl;
		cout<<"\n your name:"<<student_name;
		cout<<"\n name of course:"<<course_name;
		cout<<"\n marks in course:"<<marks;
		cout<<"\n name of college: "<<college_name;
	}
};
void main()
{
	course c;

	c.displayInfo();
	getch();
}