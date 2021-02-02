#include <stdio.h>
#include <algorithm>
using namespace std;
long long int dp[201][12];
long long int combination(int n, int r){
	if(n==r||r==0){
		return 1;
	}
	else{
		if(dp[n][r]) return dp[n][r];
		else{
			dp[n][r] = combination(n-1,r-1) + combination(n-1,r);
			return dp[n][r];
		}
		
	}
}

int main(){
	int l;
	scanf("%d",&l);
	long long int ans = combination(l-1,11);
	printf("%lld",ans);
}
