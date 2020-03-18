#include<iostream>
using namespace std;
main(){
	long long s, count = 1, skill = 1;
	cin>>s;
	while(s >= skill){
		s -= skill;
		count++;
		skill += count;
//		cout<<skill<<"\n";
	}
	cout<<count - 1;
}
