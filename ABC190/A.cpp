#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int INF = INT_MAX;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	bool isWin_T = false;
	if(a>b) {
		isWin_T = true;
	}
	else if(a==b) {
		if(c==1){
			isWin_T = true;
		}
	}
	if(isWin_T){
		cout << "Takahashi";
	}
	else{
		cout << "Aoki";
	}
	
}

