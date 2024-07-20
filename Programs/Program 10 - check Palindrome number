#include<iostream>
using namespace std;
class palindrome{
	public:
		void check(int x){
			int a;
			a=x;
			int sum=0;
			while(a!=0){
				int rem=a%10;
				sum=sum*10+rem;
				a/=10;
			}
			if(x==sum){
				cout<<"The number is palindrome.\n";
			}
			else{
				cout<<"The number is not palindrome.\n";
			}
		}
};

int main(){
	int num;
	palindrome p;
	cout<<"Enter a number: ";
	cin>>num;
	p.check(num);
	return 0;
}
