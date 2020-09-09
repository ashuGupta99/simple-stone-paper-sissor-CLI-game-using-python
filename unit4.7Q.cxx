#include <iostream.h>
#include <conio.h>
class institute
{
	char i_name[100];

  public:
	void get_iname()
	{
		cout << "enter institute name \n ";
		cin >> i_name;
	}
	void show_iname()
	{
		cout << "\n name of institute:" << i_name;
	}
};

class student : virtual public institute
{
	char s_name[100];

  public:
	void get_sname()
	{
		cout << "\n enter name of sthdent:\n";
		cin >> s_name;
	}
	void show_sname()
	{
		cout << "\n name of student :" << s_name;
	}
};
class course : virtual public institute
{
	char c_name[100];

  public:
	void get_cname()
	{
		cout << "\n enter name of course:\n";
		cin >> c_name;
	}
	void show_cname()
	{
		cout << "\n course name:" << c_name;
	}
};
class classA : public student, public course
{
  public:
	void displayinfo()
	{
		show_iname();
		show_sname();
		show_cname();
	}
};

void main()
{
	clrscr();
	classA student;
	cout << "\n fill details of student\n";
	student.get_iname();
	student.get_sname();
	student.get_cname();
	cout << "\n student information";
	student.displayinfo();
	getch();
}