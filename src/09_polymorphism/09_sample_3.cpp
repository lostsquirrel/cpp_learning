#include "Array.h"
#include <iostream>
using namespace std;

void read(int *p, int n) {
	for (int i = 0; i < n; i++)
	cin >> p[i];
}

int main() {
	Array<int> a(10);
	read(a, 10);

	for(int x = 0; x < 10; x++) {
		cout<<a[x]<<endl;
	}
	return 0;
}
