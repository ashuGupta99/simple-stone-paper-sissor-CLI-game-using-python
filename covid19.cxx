#include<iostream.h>
#include<conio.h>
#include<string.h>

char name[100];
void info(int ,int, int,int);

void main(){
cout<<"\n enter name of country"<<endl;
cin>>name;
    if(strcmp(name, "india") == 0)
     { 	
    	info(1387297452 ,873,19,83);
    	cout<<"\n capital:delhi";
    }
    else if(strcmp(name, "italy") == 0)
    {
    
    info(60461826,86498,9134,10950);
    	cout<<"\n capital:rome";
    }
        else if(strcmp(name, "china") == 0)
    {
    
    info(1437889108,3128,3295,74971);
    	cout<<"\n capital:Beijing";
    }
        else if(strcmp(name, "america") == 0)
    {
    
    info(331002651,104256,1704,2525);
    	cout<<"\n capital:washington DC";
    }
         else if(strcmp(name, "spain") == 0)
    {
    
    info( 46750139,72248,5690,12285);
    	cout<<"\n capital:madrid";
    }		
    else{
    	cout<<"\n invalid input again run program";
    }
    getch();
}
     void info(int a,int b,int c,int d){
	int x=a;
	int y=b;
	int z=c;
	int w=d;
	cout<<"\n information about"<<" "<<name;
	
	cout<<"\n population"<<":"<<x; 
	cout<<"\n covid-19 cases"<<":"<<y;
	cout<<"\n deaths"<<":"<<z;
	cout<<"\n recovered"<<":"<<w;
}
 /*   void info(char s[100]){
    	    char g[100]=s;
    	    cout<<"\n capital"<<":"<<g;
      }
 */