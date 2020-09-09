#include<iostream>
#include<string.h>

char name[100];
void info(int ,int, int,int);

int main(){
std::cout<<"\n enter name of country"<<std::endl;
std::cin>>name;
    if(strcmp(name, "india") == 0){ 	
    	info(1387297452 ,873,19,83);
    	std::cout<<"\n capital:delhi";
    }
    
    else if(strcmp(name, "italy") == 0){
    info(60461826,86498,9134,10950);
    	std::cout<<"\n capital:rome";
    }
    
    else if(strcmp(name, "china") == 0){
    info(1437889108,3128,3295,74971);
    	std::cout<<"\n capital:Beijing";
    }
    else if(strcmp(name, "america") == 0){
    info(331002651,104256,1704,2525);
    	std::cout<<"\n capital:washington DC";
    }
    
    else if(strcmp(name, "spain") == 0){
    info( 46750139,72248,5690,12285);
    	std::cout<<"\n capital:madrid";
    }
    
    else{
    	std::cout<<"\n invalid input again run program";
    }
    return 0;
}
  void info(int a,int b,int c,int d){
    	std::cout<<"\n information about "<<name;
    	std::cout<<"\n population"<<":"<<a; 
    	std::cout<<"\n covid-19 cases"<<":"<<b;
    	std::cout<<"\n deaths"<<":"<<c;
    	std::cout<<"\n recovered"<<":"<<d;
  }