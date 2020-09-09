#include <iostream>
using namespace std;
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
	int myNum;
	cin>>myNum;
	int result = filter0(myNum);
	cout<<result;
	return 0;
}