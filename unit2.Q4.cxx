#include<iostream>
class My_Calculator
{
	int a,b,result;
	public:
	void getdata()
	{
		std::cout<<"\n enter two numbers for addition,  subtraction and multiplication\n "<<std::endl;
		std::cin>>a>>b;
	}
	 void add()
	{
		result=a+b;
		std::cout<<a<<"+"<<b<<" ="<<result<<std::endl;
	}
	void sub()
	{
		result=a-b;
		std::cout<<a<<"-"<<b<<"="<<result<<std::endl;
	}
		void mult()
	{
		result=a*b;
		std::cout<<a<<"*"<<b<<"="<<result<<std::endl;
	}
};
 
 int main(){
   My_Calculator a;
 
   a.getdata();
   std::cout<<"\n results(addition,subtraction,multiplication):"<<std::endl;
   a.add();

   a.sub();

   a.mult();
   return 0;
 }
 