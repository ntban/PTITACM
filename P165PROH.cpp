#include<iostream>
#include<math.h>
using namespace std;
main(){
	int n;
	cin>>n;
	while(n--){
		int a, b, c;
		cin>>a>>b>>c;
		int d = sqrt(a * b / c), e = sqrt(b * c / a), f = sqrt(c * a / b);
		cout<<(d + e + f) * 4<<"\n";
	}
}

