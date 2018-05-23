#include <stdio.h>

char s[1000];
int i;

int maior(int p,int q)
{
        return p > q ? p : q;
}

int profundidade()
{
        if (s[i++] =='l')
             return 0;
        else
            return maior(profundidade(),profundidade())+1;
}
int main(){
        int t;
        scanf("%d",&t);

        while (t){
            scanf("%s", s);
            i=0;
            printf("%d\n",profundidade());
            t--;
        }

        return 0;
}
