#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int INF = INT_MAX;

int func(ll num){
	int k = 2;
	int prev = 2;
	int cnt = 0;
	int ans = 1;
	while (num != 1) {
		if (num % k == 0) {
			//cout << k << " ";
			if(k == prev) {
				cnt++;	
			}
			// d.push_back(k);
			num /= k;
		}
		else {
			k++;
			prev = k;
			if(cnt >= 1) ans = ans*(cnt+1);
			cnt = 0;
		}
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	cout << func(2*n)/2;
//	for(int i=0;i<d.size();d++){
//		if(d==)
//	}
	// cout << 2*d.size();
	// soinsu bunhae 2k
}

