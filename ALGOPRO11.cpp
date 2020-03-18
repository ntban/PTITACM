#include<iostream>
#include<algorithm>
using namespace std;
int n;

int a[1000], d = 0;

void add(int c){
	switch(c){
		case 0:
			break;
		case 1:
			break;
		case 2:
			a[d++] = 2;
			break;
		case 3:
			a[d++] = 2;
			a[d++] = 3;
			break;
		case 4:
			a[d++] = 2;
			a[d++] = 3;
			a[d++] = 2;
			a[d++] = 2;
			break;
		case 5:
			a[d++] = 2;
			a[d++] = 3;
			a[d++] = 2;
			a[d++] = 2;
			a[d++] = 5;
			break;
		case 6:
			a[d++] = 2;
			a[d++] = 3;
			a[d++] = 2;
			a[d++] = 3;
			a[d++] = 2;
			a[d++] = 2;
			a[d++] = 5;
			break;
		case 7:
			a[d++] = 7;
			a[d++] = 2;
			a[d++] = 3;
			a[d++] = 2;
			a[d++] = 3;
			a[d++] = 2;
			a[d++] = 2;
			a[d++] = 5;
			break;
		case 8:
			a[d++] = 7;
			a[d++] = 2;
			a[d++] = 3;
			a[d++] = 2;
			a[d++] = 3;
			a[d++] = 2;
			a[d++] = 2;
			a[d++] = 2;
			a[d++] = 2;
			a[d++] = 2;
			a[d++] = 5;
			break;
		case 9:
			a[d++] = 7;
			a[d++] = 2;
			a[d++] = 3;
			a[d++] = 2;
			a[d++] = 3;
			a[d++] = 2;
			a[d++] = 3;
			a[d++] = 3;
			a[d++] = 2;
			a[d++] = 2;
			a[d++] = 2;
			a[d++] = 2;
			a[d++] = 5;
			break;
	}
}

main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		d = 0;
		for(int i = 0; i < n; i++){
			char c;
			cin>>c;
			add(c - '0');
		}
		sort(a, a + d);
		for(int i = d - 1; i >= 0; i--){
			cout<<a[i];
		}
		cout<<"\n";
	}
}
