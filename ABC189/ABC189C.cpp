#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
 
    int ans = 0;
    for (int i=0; i<n; i++) {
        int temp = a[i];
        for (int j=i; j<n; j++) {
            temp = min(temp, a[j]);
            ans = max(ans, temp * (j - i + 1));
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
