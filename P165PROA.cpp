#include<iostream>
#include<string>
#include<stack>
using namespace std;
string daoChuoi(string s){
	string t = "";
	for(int i = s.size() - 1; i >= 0; i--){
		t += s[i];
	}
	return t;
}
main(){
	string s, t = "";
	cin>>s;
	stack<char> S;
	for(int i = 0; i < s.size(); i++){
		while(!S.empty() && s[i] > S.top()){
			S.pop();
		}
		S.push(s[i]);
	}
	while(!S.empty()){
		t += S.top();
		S.pop();
	}
	cout<<daoChuoi(t);
}
