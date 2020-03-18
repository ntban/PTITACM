#include<iostream>
using namespace std;
void xuLy(){
long long n, d = 1;
	cin>>n;
	if(n == 1){
		cout<<"TERM "<<n<<" IS 1/1\n";
	}else{
		 long long s = 3, i = 1, j = 1;
		 bool stop = false;
	while(d <= n){
		if(s%2 == 1){
//			cout<<s<<"\n";
			for(i = 1; i < s; i++){
				j = s - i;
				d++;
//				cout<<d<<": "<<i<<"/"<<j<<"\n";
				if(d == n){
					stop = true;
					break;
				}
			}
		}else{
//			cout<<s<<"\n";
			for(i = s - 1; i > 0; i--){
				j = s - i;
				d++;
//				cout<<d<<": "<<i<<"/"<<j<<"\n";
				if(d == n){
					stop = true;
					break;
				}
			}	
		}
		if(stop){
			break;
		}else{
			s++;
		}
	}
	cout<<"TERM "<<n<<" IS "<<i<<"/"<<j<<"\n";
}
}
main(){
	int test;
	cin>>test;
	while(test--){
		xuLy();
	}
}
