#include <stdio.h>
#include <stdlib.h>
int count = 0;

bool f(int r1, int c1, int r2, int c2){
	if((r1+c1)==(r2+c2)) {
		return true;
	}
	if((r1-c1)==(r2-c2)){
		return true;
	}
	if(abs(r1-r2)+abs(c1-c2)<=3){
		return true;
	}
	return false;
}

int main(){
	int r1, c1;
	int r2, c2;
	scanf("%d %d",&r1,&c1);
	scanf("%d %d",&r2,&c2);
	bool flag = false;
	if((r1+c1-r2-c2)%2==0) flag = true;
	
	if(r1==r2 && c1==c2){
		printf("0");
		return 0;
	}
	
	if(f(r1,c1,r2,c2)){
		printf("1");
		return 0;
	}
	
	if(flag) {
		printf("2");
		return 0;
	}

	// 영역에 있는 모든 점이랑 그 점이 조건을 만족하는지 확인 
	
	printf("3");
	return 0;
}
