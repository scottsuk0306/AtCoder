#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    int tmp, n;
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }
    while(b!=0){
        n = a%b;
        a = b;
        b = n;
    }
    return a;
}
int modInverse(int a, int m) 
{ 
    a = a % m; 
    for (int x = 1; x < m; x++) 
        if ((a * x) % m == 1) 
            return x; 
} 
int main(){
	int T;
	cin >> T;
	while(T--){
		int N,S,K;
		cin >> N >> S >> K;
		if(gcd(K,N)!=1){
			cout << "-1";
			continue;
		}
		int inv = modInverse(K,N);
		cout << inv*(S+N) << "\n";
	}
	
}
