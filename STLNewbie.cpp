#include<bits/stdc++.h>
using namespace std;

void doStack(){
	stack<int> s;
	for(int i = 0; i < 5; i++){
		s.push(i);
	}
	cout<<s.size()<<"\n";
	while(!s.empty()){
		cout<<s.top()<<" - ";
		s.pop();
	}
}

bool reversed(int i, int j){
	return (i > j);
}

void doSort(){
	int a[] = {0, 9, 1, 7, 3 , 4, 6, 5, 2, 8};
	sort(a, a + 10, reversed);
	for(int i = 0; i < 10; i++){
		cout<<a[i]<<" - ";
	}
}

bool notExactly(int i, int j){
	return (i < j);
}

void doSearch(){
	int a[] = {0, 9, 1, 7, 3};
	vector<int> v(a, a + 5);
	sort(v.begin(), v.end());
	cout<<"looking for a 3 at ...";
	if(binary_search(v.begin(), v.end(), 3)){
		//just return true or false
		cout<<"found!\n";
	}else{
		cout<<"not found!\n";
	}
	cout<<"looking for a 6 at ...";
	if(binary_search(v.begin(), v.end(), -1, notExactly)){
		cout<<"found!\n";
	}else{
		cout<<"not found!\n";
	}
}

int n = 6;
int a[6][6] = {
		{0, 2, 1, 0, 0 ,3},
		{2, 0, 0, 0, 0 ,5},
		{1, 0, 0, 1, 3 ,0},
		{0, 0, 1, 0, 2 ,0},
		{0, 0, 3, 2, 0 ,3},
		{3, 5, 0, 0, 3 ,0}
		};
int chuaxet[6];

void dfs(int v){
	cout<<"Dinh "<<v<<"\n";
	chuaxet[v] = 1;
	for(int u = 0; u < n; u++){
		if(a[v][u] != 0 && chuaxet[u] == 0){
			dfs(u);
		}
	}
}

void doDFS(int v){
	for(int i = 0; i < n; i++){
		chuaxet[i] = 0;
	}
	dfs(v);
}

void doBFS(int v){
	for(int i = 0; i < n; i++){
		chuaxet[i] = 0;
	}
	chuaxet[v] = 1;
	queue<int> q;
	q.push(v);
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(int i = 0; i < n; i++){
			if(a[u][i] != 0 && chuaxet[i] == 0){
				cout<<"Dinh "<<i<<"\n";
				chuaxet[i] = 1;
				q.push(i);
			}
		}
	}
}



main(){
	doBFS(1);
}

