#include<iostream>
using namespace std;
main(){
	long long n = 1, count = 1;
	cin>>n;
	while(n > 1){
		if(n % 2 == 1){
			count++;
		}
		n /= 2;
	}
	cout<<count;
}
