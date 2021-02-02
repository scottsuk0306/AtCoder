#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll p[225816],q[225816],r[225816],s[225816],t[225816],u[225816],x[225816],y[225816];
// p q r
// s t u	
 
int main(void){
	int n,m,qu;
	ll k;
	p[0] = 1; 
	t[0] = 1;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x[i] >> y[i];
	}
	cin >> m;
	for(int i=0; i<m; i++){
		int op;
		cin >> op;
		switch(op){
			case 1:
			p[i+1] = s[i]; q[i+1] = t[i]; r[i+1] = u[i]; 
			s[i+1] = -p[i]; t[i+1] = -q[i]; u[i+1] = -r[i];
			break;
 
			case 2:
			p[i+1] = -s[i]; q[i+1] = -t[i]; r[i+1] = -u[i]; 
			s[i+1] = p[i]; t[i+1] = q[i]; u[i+1] = r[i];
			break;
 
			case 3:
			cin >> k;
			p[i+1] = -p[i]; q[i+1] = -q[i]; r[i+1] = k*2-r[i];
			s[i+1] = s[i]; t[i+1] = t[i]; u[i+1] = u[i];
			break;
 
			case 4:
			cin >> k;
			p[i+1] = p[i]; q[i+1] = q[i]; r[i+1] = r[i];
			s[i+1] = -s[i]; t[i+1] = -t[i]; u[i+1] = k*2-u[i];
			break;
		}
	}
	cin >> qu;
	for(int i=0; i<qu; ++i){
		int a, b;
		cin >> a >> b;
		b--;
		cout << (x[b]*p[a]+y[b]*q[a]+r[a]) << " " << (x[b]*s[a]+y[b]*t[a]+u[a]) << endl;
	}
	return 0;
}
