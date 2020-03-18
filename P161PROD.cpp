#include<iostream>
#include<string.h>
using namespace std;
char str[3][20];
int n;
char dich(char t, char dir){
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < n; j++){
				if(t == str[i][j]){
					if(dir == 'L'){
						j ++;
						if(j == n){
							j = 0;
						}
					}else{
						j --;
						if(j == -1){
							j = n - 1;
						}
					}
					return str[i][j];
				}
			}
		}
	return ' ';
}
main(){
	char dir, *s = new char[101];
	cin>>dir;
	fflush(stdin);
    gets(s);
    strcpy(str[0], "qwertyuiop");
	strcpy(str[1], "asdfghjkl;");
	strcpy(str[2], "zxcvbnm,./");
	n = strlen(str[0]);
	for(int i = 0; i < strlen(s); s++){
		cout<<dich(s[i], dir);
	}
}
