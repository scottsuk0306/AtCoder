#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std; 
int main(){
	int n;
	scanf("%d",&n);
	int size = 2<<(n-1);
	vector<int> a(size);
	for(int i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	int index1, index2;
	int max1 = 0;
	int max2 = 0;
	for(int i=0;i<(size/2);i++){
		if(max1<a[i]){
			max1 = a[i];
			index1 = i;
		}
	}
	for(int i=(size/2);i<size;i++){
		if(max2<a[i]){
			max2 = a[i];
			index2 = i;
		}
	}
	if(max1==max(max1,max2)){
		printf("%d",index2+1);
	}
	else{
		printf("%d",index1+1);
	}
}
