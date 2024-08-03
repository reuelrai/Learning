//Check number is armstrong or not
#include<iostream>
using namespace std;
class armstrong{
	private:
		int x;
	public:
		void arm(int y){
			x=y;
			int sum=0;
			int temp=x;
			while(x!=0){
				int rem=x%10;
				sum = sum+rem*rem*rem;
				x/=10;
			}
			if(temp==sum){
				cout<<"The number is armstong.\n";
			}
			else{
				cout<<"The number is not armstrong.\n";
			}
		}
};
int main(){
	int num;
	armstrong a;
	cout<<"Enter a number: \n";
	cin>>num;
	a.arm(num);
	return 0;
}
