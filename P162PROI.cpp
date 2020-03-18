#include<iostream>
#include <stdlib.h>
using namespace std;
main(){
	long long n = 1;
//	while(n != 0){
		cin>>n;
		long long t = abs(n);
		if(t == n){
			cout<<t;
		}else{
			int q = t%10;
			int k = ((t%100)-q)/10;
			long long z = t/100 ;
			long long x = (z*10 + q)*(-1);
			if((z*10 + k )*(-1)> x){
				x = (z*10 + k )*(-1);
			}
			cout<<x;	
		}
		
//	}
}
