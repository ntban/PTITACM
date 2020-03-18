#include<iostream>
using namespace std;
main(){
	long long a, b, c;
	cin>>a>>b>>c;
	long long max = a;
	if(a < b){
		max = b;
	}
	if(max < c){
		max = c;
	}
	long long kq = (a+b+c-max)*2;
	if(kq > a+b+c){
		kq = a+b+c;
	}
	cout<<kq;
	
}
