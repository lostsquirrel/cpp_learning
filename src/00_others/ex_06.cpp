/*
 * ex_06.cpp
 *
 *  Created on: Nov 29, 2015
 *      Author: lisong
 */

#include <iostream>
using namespace std;

void displayOct(int n) {
	if (n > 0) {
		if (n / 8 > 0) {
			displayOct(n / 8);
		}
		cout << n % 8;
	}
}
int main(void) {
	displayOct(99);
	return 0;
}
