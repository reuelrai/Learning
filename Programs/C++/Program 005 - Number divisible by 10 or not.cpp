//WAP to check whether the number is divisible by 10 or not.
#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter a number: \n";
	cin>>number;
	if(number%10==0){
		cout<<number<<" is divisible by 10.\n";
	}
	else{
		cout<<number<<" is not divisible by 10.\n";
	}
	return 0;
}
