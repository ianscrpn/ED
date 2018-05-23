#include<cstdio>
#include<map>

#define maior(a,b) a>b ? a:b


using namespace std;

int main(){

    int N,i,raiz;
    long long int c = 0, val = 0;
    map<int,long long int> tree;

    scanf("%d",&N);

    while(N--){

        int dir = 0, esq = 0;
        scanf("%d",&i);
        tree[i] = 0;
        if(tree.size()==1){
            raiz = i;
            printf("%d\n",0);
            continue;
        }
        map<int,long long int>::iterator it = tree.find(i);
        map<int,long long int>::iterator it_aux = it;

        if(i>raiz){
            if(++it != tree.end())
                dir = it->second;
            esq = (--it_aux)->second;
        }else{
            dir = (++it)->second;
            if(it_aux != tree.begin())
                esq = (--it_aux)->second;
        }

        val = maior(dir,esq);
        val += 1;
        tree[i] = val;
        c = c + val;

        printf("%lld\n",c);
  }
}
