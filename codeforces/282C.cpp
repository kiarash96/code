#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);

	string a, b;
	cin >> a >> b;

	if (a == b)
		cout << "YES";
	else if (a.size() != b.size() || a == string(a.size(), '0') || b == string(b.size(), '0'))
		cout << "NO";
	else
		cout << "YES";
	cout << endl;

	return 0;
}
