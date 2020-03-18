#include<iostream>
#include<math.h>
using namespace std;
int a[1000001];
void prime(){
	a[1] = 1;
	for(int i = 2; i < 1001; i++){
		if(a[i] == 0){
			for(int j = i + i; j <= 1000001; j += i){
				a[j] = 1;
			}
		}
	}
//	for(int i = 2; i < 1000001; i++){
//		if(a[i] == 0){
//			cout<<i<<"\t\t";
//		}
//	}
}
void ganNguyenTo(long long n){
	double i = sqrt(n);
	long long j = (long long)i;
	if(i == j){
		if(a[j] == 0){
			cout<<"YES\n";
			return;	
		}
	}
	cout<<"NO\n";
}
main(){
	prime();
	long long n, a;
	cin>>n;
	for(long long i = 0; i < n; i ++){
		cin>>a;
		ganNguyenTo(a);
	}
}
