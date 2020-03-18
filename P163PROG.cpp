#include<iostream>
using namespace std;
long long toPrime(long long n){
	long long t = 0;
	while(n > 1 && n %2==0){
		n/=2;
		t++;
	}
	t++;
	long long d = 0;
	for(long long i = 3; n>1; i+=2){
		if(n%i==0){
		while(n%i==0){
			n/=i;
			d++;
		}
		d++;
		t*=d;
		d=0;
		}
	}
	return t;
}
long long result(long long n, long long x){
	long long t = toPrime(x);
	while(x > n && x%2 == 0){
		t-=2;
		x/=2;
	}
	for(long long i = 3; x>n; i+=2){
		if(x%i==0){
		while(x%i==0){
			x/=i;
			t-=2;
		}
		}
	}
	return t;
}
main(){
	long long x, n;
	cin>>n;
	cin>>x;
cout<<result(n,x);
}
