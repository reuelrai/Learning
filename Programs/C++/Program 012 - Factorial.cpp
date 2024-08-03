#include<iostream>
using namespace std;
class factorial{
	private:
		int x;
	public:
		int mul,i,y;
		factorial(){
			x=y;
		}
		void fact(int a){
			x=a;
			mul=1;
			for(i=1;i<=x;i++){
				mul=mul*i;
			}
		}
		void print(){
			cout<<"The factorial is: "<<mul;
		}
};
int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	factorial f;
	f.fact(num);
	f.print();
	return 0;
}
