/*WAP to calculate sales commission as follows:
If sales >= 1 and sales < 5000 then, commission is 5%.
If sales >= 5000 and sales < 10000 then, commission is 4%.
If sales >= 10000 and sales < 50000 then, commission is 3%.
If sales >= 50000 then, commission is 2%.
*/
#include<iostream>
using namespace std;
int main(){
	int sales;
	cout<<"Enter sales: \n";
	cin>>sales;
	if(sales >= 1 && sales < 5000){
		cout<<"The sales commission is: "<<(0.05*sales); 
	}
	else if(sales >= 5000 && sales < 10000){
		cout<<"The sales commission is: "<<(0.04*sales);
	}
	else if(sales >= 10000 && sales < 50000){
		cout<<"The sales commission is: "<<(0.03*sales);
	}
	else{
		cout<<"The sales commission is: "<<(0.02*sales);
	}
	return 0;
}

