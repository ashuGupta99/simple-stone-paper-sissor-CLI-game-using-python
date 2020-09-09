#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	char c[]="sanjeela sagar";
	cout.write(c,14).put('\n');
	// put ('\n') is used in place
	
	char s[]="ABCDEFGHIJK";
	cout.write(s,11)<<endl;
	// writes 5 bytes from string s
	
	char name[ 0];
	cout<<"enter your name:";
	cin.read(name,15);
	// reads 15 bytes from name
	
	cout.write(name,15)<<endl;
	// writes 15 bytes from name
	
	getch();
	
}