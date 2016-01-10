/*
 * ex_08.cpp
 *
 *  Created on: Nov 29, 2015
 *      Author: lisong
 */

#include <iostream>
using namespace std;
class R {
public:
	static int x = 3;
	R() {};
	const void p(float f) {
		cout << "r1";
	}
	void p1(float f) {
		cout << "r2";
	}
};
class Window {
};
class House {
	Window w;
	Window &wx;
//	House h;
	House &hx;
};
int main(void) {
	const R r1;
//	R::p(0.1f);
	R r2;
	r2.p(0.2);
	cout << R::x;
	cout << r1.x;
	return 0;
}
