#include <iostream>
using namespace std;

int main(){

	int n1, n2, count = 0;

	cin >> n1;
	int s[n1];

	for(int i = 0; i < n1; i++){
		cin >> s[i];
	}

	cin >> n2;
	int q[n2];

	for(int i = 0; i < n2; i++){
		cin >> q[i];
	}

	for (int i = 0; i < n1; i++){
		for ( int j = 0; j < n2; j++){
			if (s[i] == q[j]){
				count++;
			}
		}
		if(count == 0){
			cout << s[i] << " ";
		
		}
	count = 0;
	}

	return 0;
}