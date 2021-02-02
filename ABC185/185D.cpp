#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n,m;
	int blue[20001];
	int length[20000];
	int last;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d",&blue[i]);
	}
//	sort(blue,blue+m);
//	for(int i=0;i<m;i++){
//		printf("%d\n",blue[i]);
//	}
	int ans = blue[0];
	last = blue[0];
	for(int i=1;i<m;i++){
		length[i-1] = blue[i]-last-1;
		//printf("ans and length: %d %d ", ans, length);
		ans = min(ans, length[i-1]);
		//printf("answer updated: %d\n",ans);
		last = blue[i];
	}
	if(m==0){
		printf("1");
		return 0;
	}
	int f = 0;
	for(int i=0;i<m-1;i++){
		f+=((2*length[i]-1/ans)-1);
	}
	printf("%d",f);
}
