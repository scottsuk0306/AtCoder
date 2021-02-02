#include <bits/stdc++.h>
using namespace std;
int main(){
	int N, X;
	cin >> N >> X;
	vector<int> v(N);
	vector<int> p(N);
	for(int i=0;i<N;i++){
		cin >> v[i] >> p[i];
	}
	double ans = 0;
	int idx = 0;
	bool flag = false;
	for(int i=0;i<N;i++){
		ans += (double)v[i]*p[i]/100;
		if(ans > X){
			idx = i+1;
			flag = true;
			break;
		}
	}
	if(flag){
		cout << idx;
	}
	else {
		cout << "-1";
	}
}
