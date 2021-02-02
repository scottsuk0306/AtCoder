#include <stdio.h>
double exp[100][100][100];
bool visited[100][100][100];
double dp(int a,int b,int c){
	// base case
	if(a==100||b==100||c==100){
		return 0;
	}
	if(exp[a][b][c]>0) return exp[a][b][c];
	exp[a][b][c] = ((dp(a+1,b,c) + 1)*(double(a)/(a+b+c)) + (dp(a,b+1,c) + 1)*(double(b)/(a+b+c)) + (dp(a,b,c+1)+1)*(double(c)/(a+b+c)));
	return exp[a][b][c];
}
int main(){
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%.9f",dp(a, b, c));
}
