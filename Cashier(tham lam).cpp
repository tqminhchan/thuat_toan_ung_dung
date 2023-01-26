#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
void Cashier(int X, int c[], int S[], int n){
	for (int i=n-1; i>=0;i--){
		int soluong = X / c[i];
		if (soluong > 0) S[i] = soluong;
		X%= c[i];
	}
}
int main(){
	int c[]= {1,5,10,25,100};
	int S[5]={0};
	int n=5; int X=383;
	Cashier(X,c,S,n);
	cout << "Cach doi "<<X<<" cent:"<<endl;
	for (int i=0;i<n;i++){
		if(S[i]>0) cout << S[i]<<" dong menh gia "<<c[i]<<endl;
		
	}return 0;
}
