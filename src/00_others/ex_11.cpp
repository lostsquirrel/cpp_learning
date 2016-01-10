/*
 * ex_11.cpp
 *
 *  Created on: Nov 29, 2015
 *      Author: lisong
 */

#include <iostream>
using namespace std;

class A {
	int val;
public:
	A(int x) : val(x) { }
	void print() const {
		cout << "const:val=" << val << " ";
	}
	void print() {
		cout << "val=" << val << " ";
	}
};

int main(void) {
	A a1(1);
	const A a2(2);
	a1.print();
	a2.print();
	return 0;
}
