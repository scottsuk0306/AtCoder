#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a.begin()+1,a.end());
	vector<unsigned long long int> sum(n+1);
	sum[1] = a[1];
	for(int i=2;i<=n;i++){
		sum[i] = sum[i-1]+a[i];
	}
	int ans = 0;
	for(int i=1;i<=n;i++){
		ans += (-n+i)*a[i] + (sum[n]-sum[i]);
	}
	cout << ans;
}
