#include<iostream>
using namespace std;
class fibonacchi{
	public:
		int fibo(int x){
			if(x<=0) return 0;
			if(x==1) return 1;
			int a=0,b=1,c;
			for(int i=2;i<=x;i++){
				c=a+b;
				a=b;
				b=c;
			}
			return b;
		}
};
int main(){
	int n;
	fibonacchi fib;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Fibonacchi series: \n";
	for(int i=0;i<n;i++){
		cout<<fib.fibo(i)<<" ";
	}
	return 0;
}
