#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, b = 1, a = 0;
	cin>>n;
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= 2*i; j++){
			b = b*j;			
		}a+=b;
		b = 1;
	}
	cout<<a;
}
