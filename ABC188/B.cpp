#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std; 
int main(){
	int n;
	scanf("%d",&n);
	vector<int> a(n);
	vector<int> b(n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	int ans = 0;
	for(int i=0;i<n;i++){
		ans += a[i]*b[i];
	}
	if(ans==0) printf("Yes");
	else printf("No");
	// printf("%d",ans);
}
