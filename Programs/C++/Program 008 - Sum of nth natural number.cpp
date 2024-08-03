//WAP to find the sum of nth natural number.
#include<iostream>
using namespace std;
int main(){
	int number,sum;
	cout<<"Upto which number natural number you want the sum to be calculated? \n";
	cin>>number;
	for(int i=1;i<=number;i++){
		sum += i;
	}
	cout<<"The sum of "<<number<<"th natural number: "<<sum;
	return 0;
}
