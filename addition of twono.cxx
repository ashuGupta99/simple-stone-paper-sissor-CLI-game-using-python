#include<iostream>
int calc(int x);
int calc(int x,int y);
int main(){
  //function overloading
  int a,b,s;
	std::cout<<"enter a number"<<std::endl;
	std::cin>>s;
	std::cout<<"square"<<"("<<s<<"x"<<s<<")"<<"="<<calc(s)<<std::endl;
	
	std::cout<<"enter any two number " <<std::endl;
	std::cin>>a>>b;
  std::cout<<"addition"<<"("<<a<<"+"<<b<<")"<<"="<<calc(a,b)<<std::endl;
	return 0;
}
 int calc(int x) {
 	return (x * x);
 }
 
 int calc(int x,int y) {
 	return (x + y);
 }
