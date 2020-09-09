#include <iostream>
using namespace std;

bool check(int x){
	int rev = 0;
	int num = x;
	while(num != 0){
		int dig = num % 10;
	    rev = (rev * 10) + dig;
		num = num/10;
	}
	if(rev == x){
		return true;
	}
	else{
		return false;
	}
}

//zero filter function
int filter0(int n){
    int num = n;
	int count = 0;
	int dig;
	while(num != 0){
		dig = num % 10;
		count++;
		num /= 10;
	}
	int arr[count];
	int d,num1=n;
	for(int i=0; i<count; i++){
		d = num1 % 10;
		if(d == 0){
			d = 1;
		}
		arr[i] = d;
		num1 /= 10;
	}
	int newArr[count];
	for(int i=(count-1); i>-1; i--){
		newArr[count-(i+1)] = arr[i];
	}

	int sum = 0;
	for(int i=0; i<count; i++){
		sum = (sum * 10) + newArr[i];
	}
	return sum;
}



int main(){
	int n;
	cin>>n;
	int arrA[n];
	for(int i=0; i<n; i++){
		cin>>arrA[i];
	}
	
   for(int i=0; i<n; i++){
   	
   	bool pell = check(arrA[i]);
   	if(pell){
   		int no0 = filter0(arrA[i]);
   		if(check(no0)){
   		    cout<<no0<<endl;
   		}
   		else{
   			while(true){
   				no0++;
   				if(check(no0)){
   					cout<<no0<<endl;
   					break;
   				}
   			}
   		}
   	}
   	
   	else{
   		while(true){
   			arrA[i]++;
   			if(check(arrA[i])){
   				cout<<arrA[i]<<endl;
   				break;
   			}
   		}
   	}
   	
   }
	return 0;
}