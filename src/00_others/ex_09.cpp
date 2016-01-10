/*
 * ex_09.cpp
 *
 *  Created on: Nov 29, 2015
 *      Author: lisong
 */

#include <iostream>
using namespace std;

int func(int x, int y) {
	static int m, i = 2;
	cout << i <<endl;
	cout << m <<endl;
	i += m + 1;
	cout << i <<endl;
	cout << m <<endl;
	m = i + x + y;
	return m;
}
int main(void) {
	int k = 4, m = 1;
//	p = func(k, m);
//	cout << p <<endl;
//	p = func(k, m);
//	cout << p <<endl;
	const int &p = k;
	k = p;
	p = m;
	return 0;
}
