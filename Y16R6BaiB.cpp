#include<iostream>
using namespace std;
main(){
	int n;
	int s[101][101];
	cin>>n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			char c;
			cin>>c;
			if(c == 'C'){
				s[i][j] = 1;
			}else{
				s[i][j] = 0;
			}
		}
	}
	int d = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(s[i][j] == 1){
//				cout<<i<<" - "<<j<<": ";
				for(int k = j + 1; k < n; k++){
					if(s[i][k] == 1){
//						cout<<i<<" - "<<k<<"; ";
						d++;
					}
				}
				for(int k = i + 1; k < n; k++){
					if(s[k][j] == 1){
//						cout<<k<<" - "<<j<<"; ";
						d++;
					}
				}
//				cout<<"\n";
			}
		}
	}
	cout<<d;
}
