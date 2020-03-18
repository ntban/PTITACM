#include<bits/stdc++.h>
using namespace std;

int n, a[500][500];
int row, col;
int test;

void init(){
	cin>>n;
	cin>>row;
	cin>>col;
}

void solve(){
	for(int k = 0; k < n; k++){
		for(int j = 0; j < n; j++){
			a[k][j] = 0;
		}
	}
	
	int d = 0, c = n - 1, i, x = 1;
	while(d <= c){
		for(i = d; i <= c; i++){
			a[d][i] = x++;
		} 
		for(i = d + 1; i <= c; i++){
			a[i][c] = x++;
		}
		for(i = c - 1; i >= d; i--){
			a[c][i] = x++;
		}
		for(i = c - 1; i > d; i--){
			a[i][d] = x++;
		}
		d++;
		c--;
	}
}

void result(){
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < n; j++){
//			cout<<a[i][j]<<" ";
//		}
//		cout<<"\n";
//	}
	cout<<a[row - 1][col - 1]<<"\n";
}

main(){
	cin>>test;
	while(test--){
		init();
		solve();
		result();
	}
}
