#include <stdio.h>
#include <algorithm>
using namespace std; 
int main(){
	int x, y;
	scanf("%d %d", &x,&y);
	int small = min(x,y);
	int big = max(x,y);
	if(small+3>big){
		printf("Yes");
	}
	else{
		printf("No");
	}
}
