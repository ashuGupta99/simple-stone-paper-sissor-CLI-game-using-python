#include<iostream.h>
#include<string>
#include<algorithm>
using namespace std;

void main()
{
	string str="hello ,it's going to reverse";
	reverse(str.begin(),str.end());
	cout<<str;
	
	string s1="sanjeela";
	string s2="sagar";
	
	if(s1<s2)
	cout<<endl<< s1<<" comes befor"<<s2;
	else
	cout<<endl<< s2<<" comes befor "<<s1;
}