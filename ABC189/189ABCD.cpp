#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int n;
	cin >> n;
	vector<string> s(n);
	for(int i=0;i<n;i++){
		cin >> s[i];
	}
	ll ans = 1;
	for(int i=0;i<n;i++){
		if(s[i]=="OR") {
			ans += 1LL << (i+1);
		}
	}
	cout << ans;
}
