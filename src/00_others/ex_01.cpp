/*
 * ex_01.cpp
 *
 *  Created on: Nov 29, 2015
 *      Author: lisong
 */

#include <iostream>
using namespace std;

class A {
public:
	A(int e1, int e2): e1(e1), e2(e2) {}
	static int count(const int &e1, const int &e2) {
		return e1 * e2 >= 0 ? e1 : e2;
	};

private:
	int e1;
	int e2;
};
int main(void) {
	A a(1, 3);
	int t1 = 1;
	int t2 = -1;
	int x = a.count(t1--, ++t2);
	cout<<x<<endl;
	return 0;
}
