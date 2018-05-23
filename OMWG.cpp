#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int x = (2*m*n)-(m+n);
        printf("%d\n", x);
    }
return 0;
}
