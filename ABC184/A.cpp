#include <stdio.h>
#include <string.h>
int main()
{
    int N, X;
    scanf("%d %d",&N, &X);
    char a[200000];
    scanf("%s",a);
    for(int i = 0; i<N; i++){
        if(a[i] =='o'){
            X+=1;
        }
        else{
            if(X>=1) X-=1;
            else continue;
        }
    }
    printf("%d",X);
}

