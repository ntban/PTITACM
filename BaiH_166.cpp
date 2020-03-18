#include<iostream>
#include<stdio.h>
using namespace std;
bool ganNgto(int n){
	int d = 0, i = 2;
	while(n > 1 && d <= 2 && i <= n){
		if(n % i == 0){
			d++;
			while(n % i == 0){
				n /= i;
			}
		}
		i++;
	}
	return (d == 2);
}

main(){
	int n, d = 0;
	cin>>n;
	for(int i = 0; i <= n; i++){
		if(ganNgto(i)){
//			cout<<i<<"\n";
			d++;
		}
	}
	cout<<d;
}
