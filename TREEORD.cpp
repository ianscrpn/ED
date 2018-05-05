#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	int tree[3][n];

	for(int i = 0; i < 3; i++)
		for(int j = 0; j < n; j++)
			cin >>  tree[i][j];

    if(tree[0][0] == tree[1][n-1] && tree[0][n-1] == tree[2][n-1] && tree[1][0] == tree[2][0])
        cout << "yes";
        else
        cout << "no";
}
