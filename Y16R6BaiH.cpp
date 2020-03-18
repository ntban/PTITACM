#include<iostream>
#include<stdio.h>
using namespace std;

int N = 3001, M = 0;
bool sang[3001];
int so[3001];

void sangNgTo() {
        int d = 0;
        for (int i = 2; i < N / 2; i++) {
            if (!sang[i]) {
                M++;
                so[d] = i;
                d++;
                for (int j = i + i; j < N / 2; j += i) {
                    sang[j] = true;
                }
            }
        }
}

int demGan(int n) {
        int dem = 0;
        for (int i = 0; i < M; i++) {
            for (int j = i + 1; j < M; j++) {
                if (so[i] * so[j] <= n) {
                    cout<<"("<<so[i]<<","<<so[j]<<") : "<<so[i] * so[j]<<"\n";
                    dem++;
                    cout<<"Dem: "<<dem<<"\n";
                }
            }
        }
        return dem;
}


main() {
		int n;
        cin>>n;
        sangNgTo();
        cout<<demGan(n)<<"\n";
    }
