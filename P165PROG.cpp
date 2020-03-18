#include<iostream>
#include<string>
using namespace std;

int compare(string x, string y){
	if(x.compare(y) == 0){
		return 0;
	}
	int n = x.size(), m = y.size();
	if(n > m){
		return 1;
	}else if(n < m){
		return -1;
	}else{
		for(int i = 0; i < n; i++){
			if(x[i] > y[i]){
//				cout<<"Vi tri: "<<i<<"\n";
				return 1;
			}else if(x[i] < y[i]){
//				cout<<"Vi tri: "<<i<<"\n";
				return -1;
			}
		}
	}
}

string dataType(string s){
	string types[] = {"byte", "short", "int", "long", "BigInteger"};
	bool neg = false;
	if(s[0]=='-'){
		neg = true;
		s.erase(0, 1);
	}
	int i = 0;
	if((!neg && compare(s, "127") <= 0) ||
		 (neg && compare(s, "128") <= 0)){
		return types[i];
	}
	i++;
	if((!neg && compare(s, "32767") <= 0) ||
		 (neg && compare(s, "32768") <= 0)){
		return types[i];
	}
	i++;
	if((!neg && compare(s, "2147483647") <= 0) ||
		 (neg && compare(s, "2147483648") <= 0)){
		return types[i];
	}
	i++;
	if((!neg && compare(s, "9223372036854775807") <= 0) ||
		 (neg && compare(s, "9223372036854775808") <= 0)){
		return types[i];
	}
	i++;
	return types[i];
}
main(){
	string s;
	cin>>s;
	cout<<dataType(s);
}
