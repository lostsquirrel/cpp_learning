/*
 * ex_05.cpp
 *
 *  Created on: Nov 29, 2015
 *      Author: lisong
 */

#include <iostream>
using namespace std;

int main(void) {
	int i = 2;
	switch (i) {
	case 1:
		i += 10;
	case 2:
		i += 10;
	case 3:
		i++;
		break;
	default:
		i++;
		break;
	}
	cout << i << endl;
	return 0;
}
