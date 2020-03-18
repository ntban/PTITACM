#include<iostream>
#include<math.h>
using namespace std;

int dienSo(double a, double b, double c, int viTri){
	switch(viTri){
		case 0:
			if((a + c) / 2 == b){
				return a - (b - a);
			}
			if(c / b == b / a){
				double t = a / (b / a);
				if((int) t == t){
					return t;
				}
			}
			break;
		case 3:
			if((a + c) / 2 == b){
				return c + (b - a);
			}
			if(c / b == b / a){
				double t = c * (b / a);
				if((int) t == t){
					return t;
				}
			}
			break;
		case 1:
			if((b - a) / 2 == c - b){
				return (a + (c - b));
			}
			if(sqrt(b / a) == c / b){
				double t = a * (c / b);
				if((int) t == t){
					return t;
				}
			}
			break;
		case 2:
			if((c - b) / 2 == b - a){
				return (b + (b - a));
			}
			if(sqrt(c / b) == b / a){
				double t = b * (b / a);
				if((int) t == t){
					return t;
				}
			}
			break;
	}
	return -1;
}

main(){
	double a, b, c, d;
	while(true){
		cin>>a>>b>>c>>d;
		if(a == b && b == c && c == d && d == -1){
			break;
		}
		int t;
		if(a == -1){
			t = dienSo(b, c, d, 0);
		}else if(b == -1){
			t = dienSo(a, c, d, 1);
		}else if(c == -1){
			t = dienSo(a, b, d, 2);
		}else{
			t = dienSo(a, b, c, 3);
		}
		if(t >= 1 && t <= 10000){
			cout<<t<<"\n";
		}else{
			t = -1;
			cout<<t<<"\n";
		}
	}
}
