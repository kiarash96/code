#include <iostream>
using namespace std;

int N;

int main() {
	cin >> N;
	for (int i = 0; i < N; i ++) {
		int x = 0;
		for (int j = 0; j < N; j ++) {
			int aij;
			cin >> aij;

			if (i != j)
				x |= aij;
		}
		cout << (i == 0 ? "" : " ") << x;
	}
	cout << endl;
	return 0;
}
