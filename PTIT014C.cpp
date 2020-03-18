#include<iostream>
#include<string.h>
using namespace std;

int doDai(char x[], char y[]){
	int n = strlen(x), m = strlen(y);
	int l[101][101];
	l[0][0] = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(x[i - 1] == y[j - 1]){
//				cout<<i<<" - "<<j<<"\n";
//				cout<<x[i - 1]<<" - "<<y[j - 1] <<"\n\n";
				l[i][j] = l[i - 1][j - 1] + 1;
			}else{
				int Max = l[i - 1][j];
				if(Max < l[i][j - 1]){
					Max = l[i][j - 1];
				}
				l[i][j] = Max;
			}
		}
	}
//	for(int i = 0; i <= n; i++){
//		for(int j = 0; j <= m; j++){
//			cout<<l[i][j]<<" ";
//		}
//		cout<<"\n";
//	}
//	cout<<l[n][m]<<"\n";
	return l[n][m];
}

void timDoDai(){
	int n;
	cin>>n;
	char x[n][101];
	for(int i = 0; i < n; i++){
		cin>>x[i];
	}
	int m = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(m < doDai(x[i], x[j])){
//				cout<<x[i]<<" - "<<x[j]<<"\n";
//				cout<<"m = "<<m<<"\n";
				m = doDai(x[i], x[j]);
			}
		}
	}
	cout<<m<<"\n";
//	cout<<"m = "<<m<<"\n";
}

main(){
	int t;
	cin>>t;
	while(t--){
		timDoDai();
	}
//doDai("3513553","153531");
}
