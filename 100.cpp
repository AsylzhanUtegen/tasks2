#include <bits/stdc++.h>
using namespace std;
int main(){
	int n1, n2, n3, n4;
	for(int i = 1000; i < 10000; i++){
		n1 = i/1000;
		n2 = i%1000/100;
		n3 = i%100/10;
		n4 = i%10;
		if(n1 == 5 || n2 == 5 || n3 == 5 ||
		   n4 == 5 || n1 == 6 || n2 == 6 ||
		   n3 == 6 || n4 == 6){
		   	continue;
		   }
		cout<<i<<" ";
	}
}
