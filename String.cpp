#include<iostream>
#include<string.h>
using namespace std;
char x[1001], y[1001];
int m, n;
void BruteForce(){
	for(int j = 0; j <= n-m; j++){
		//Kiem tra mau
		for(int i = 0; i < m && x[i]==y[i+j]){
			if(i >= m){
				cout<<j;
			}
		}
	}
}
int kmpNext[1001];
void preKmp(){
	int i = 1, len = 0;	
	while(i < m){
		if(X[i] == X[len]){
			len++;
			kmpNext[i] = len;
			i++;
		}else{
			if(len != 0){
				len = kmpNext[len - 1];
			}else{
				kmpNext[i] = 0;
				i++;
			}
		}
	}
}
void kmp(){
	preKmp();
	int i = 0, j = 0;
	while(j < n){
		if(x[j] == y[i]){
			i++;
			j++;
		}
		if(i == m){
			//Tim thay mau o vi tri i-j
			j = kmpNext[j - 1];
		}else if(i < n && x[j] != y[i]){
			if(j != 0){
				//co kha nang xuat hien mau o 1 doan nao do
				j = kmpNext[j - 1];
			}else{
				i++;
			}
		}
	}
}
