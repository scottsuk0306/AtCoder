#include <bits/stdc++.h>
using namespace std;
int main(){
	int H, W, M;
	cin >> H >> W >> M;
	vector<pair<int,int>> v(M);
	for(int i=0;i<M;i++){
		int x, y;
		cin >> x >> y;
		// cout << x << " " << y << "\n";
		// pair<int,int> test = make_pair(x,y);
		// cout << test.first << " " << test.second << "\n";
		v.emplace_back(x,y);
	}
	for(int i=0;i<M;i++){
		cout << v[i].first << " " << v[i].second << "\n";
	}
}
