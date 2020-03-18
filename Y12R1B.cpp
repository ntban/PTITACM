#include<iostream>
using namespace std;

void doi(int i, int bit){
	int dem = 0, a[100];
	while(dem < bit){
		a[dem] = i % 2;
		dem++;
		i /= 2;
	}
	for(int j = dem - 1; j >= 0; j--){
		cout<<a[j];
	}
	cout<<"\n";
}

main(){
	int bit;
	cin>>bit;
	for(int i = 0; i < (1 << bit); i++){
		doi(i ^ (i >> 1), bit);
	}
}

