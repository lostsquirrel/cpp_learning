/*
 * ex_02.cpp
 *
 *  Created on: Nov 29, 2015
 *      Author: lisong
 */

#include <iostream>
using namespace std;

int main(void) {
	int x = 4;
	do {
		cout << (x -= 3) << endl;
	} while (--x);
	return 0;
}
