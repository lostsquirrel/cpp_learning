/*
 * ex_12.cpp
 *
 *  Created on: Nov 29, 2015
 *      Author: lisong
 */

#include <iostream>
using namespace std;

void add(int &n) {
	int a, i;
	for (i = 0; i < n; i++) {
		static int m;
		a = m++;
	}
	n = a;
}
int main(void) {
	int p = 3;
	add(p);
	cout << p;
	add(p);
	cout << p <<endl;
	return 0;
}
