#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n, m, t;
	int a[1001];
	int b[1001];
	scanf("%d %d %d",&n, &m, &t);
	for(int i=0;i<m;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	int cur = n;
	int idx = 0;
	bool incafe = false;
	for(int i=1;i<=t;i++){
		if(incafe){
			if(cur<n) cur+=1;
		}
		else {
			cur-=1;
		}
		
		if(i==a[idx]) {
			incafe = true;
			// cur-=2;
		}
		if(i==b[idx]){
			incafe = false;
			idx+=1;
		}
		
		if(cur<=0) {
			printf("No");
			return 0;
		}
		printf("t = %d, cur battery = %d, incafe = %d\n",i,cur,incafe);
	}
	if(cur>0) printf("Yes");
	else printf("No");
}
