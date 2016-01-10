/*
 * ex_07.cpp
 *
 *  Created on: Nov 29, 2015
 *      Author: lisong
 */

#include <iostream>
using namespace std;

int main(void) {
	int * first;
	int * second;
	first = new int[5];
	second = first;
	delete [] first;
	delete [] second;
	return 0;
}
