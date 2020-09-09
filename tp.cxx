#include <iostream>
using namespace std;
int main(){
	
	int num  = 203023;
	int num2 = num;
	int num3 = num;
	int dig;
	int i = 0;
	int arr[6];
	
	int count = 0;
	int dig2;
	while(num2 != 0){
		dig2 = num2 % 10; //mila last digit
		count++;
		num2 /= 10;
	}
	
	cout<<"\n Count : "<<count<<"\n";
	int arrR[count];
	int dig3;
	for(int bs=0; bs<count; bs++){
		dig3 = num3 % 10;
		arrR[bs] = dig3;
		num3 /= 10;
	}
	for(int u=(count-1); u>-1; u--){
		cout<<"arrR["<<u<<"] : "<<arrR[u]<<endl;
	}
	
	
	while(num != 0){
		dig = num % 10;
		arr[i] = dig;
		num /= 10;
		i++;
	}

	
	int newArr[i];
	for(int j=(i-1); j>-1; j--){
		if(arr[j] == 0){
			arr[j] = 1;
		}
		newArr[6-(j+1)] = arr[j];
		cout<<arr[j]<<endl;
	}
	cout<<"\n";
	for(int x=0; x<6; x++){
		cout<<newArr[x];
	}

	int sum = 0;
	for(int z=0; z<6; z++){
		sum = (sum * 10) + (newArr[z]);
	}

	cout<<"\n"<<sum;



	
    return 0;
}