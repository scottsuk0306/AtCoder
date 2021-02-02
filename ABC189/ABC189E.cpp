// ABC189E
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int op1[2][2] = {{0,1},{-1,0}};
int op2[2][2] = {{0,-1},{1,0}};
int op3[2][2] = {{-1,0},{0,1}};
int op4[2][2] = {{1,0},{0,-1}};

int mult(){
	return 0;
}

int main(){
	int n;
	cin >> n;
	vector<pair<int, int>> p(n);
	for(int i=0;i<n;i++){
		int x, y;
		cin >> x >> y;
		p[i].first = x;
		p[i].second = y; 
	}
	cout << p[0].first;
}
