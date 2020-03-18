#include<iostream>
#include <stdlib.h>
using namespace std;
long long a[200001], n;
long long findMin(int l, int r){
	long long m = a[l];
	if(r > l){
		for(int i = l + 1; i <= r; i++){
			if(a[i] < m){
				m = a[i];
			}
		}
	}else{
		for(int i = l + 1; i < n; i++){
			if(a[i] < m){
				m = a[i];
			}
		}
		for(int i = 0; i <= r; i++){
			if(a[i] < m){
				m = a[i];
			}
		}
	}
	return m;
}
void add(int l, int r, int v){
	if(r > l){
		for(int i = l + 1; i <= r; i++){
			if(a[i] < m){
				a[i] += v;
			}
		}
	}else{
		for(int i = l + 1; i < n; i++){
			if(a[i] < m){
				a[i] += v;
			}
		}
		for(int i = 0; i <= r; i++){
			if(a[i] < m){
				a[i] += v;
			}
		}
	}
}
main(){
	cin>>n;
	for(int i =0; i < n; i++){
		cin>>a[i];
	}
	int m;
	for(int i =0; i < m; i++){
		cin>>a[i];
	}
	
}
