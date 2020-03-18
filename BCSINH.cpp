#include<iostream>
using namespace std;

int n, b[100];

void in(){
	for(int i = 0; i < n; i++){
		cout<<b[i];
	}
	cout<<"\n";
}

main(){
	cin>>n;
	int j = n - 1;
	while(j >= 0){
		in();
		j = n -1;
		while(j >= 0 && b[j] == 1){
			j--;
		}
		if(j >= 0){
			b[j] = 1;
			for(int i = j + 1; i < n; i++){
				b[i] = 0;
			}
		}
	}
	
}
