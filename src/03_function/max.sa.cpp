#include <iostream>
using namespace std;
/*
 *
 */
int max(int x, int y);
char max(char x, char y);
bool max(bool x, bool y);
int main() {
	int a = 435, b = 43;
	cout << max(a, b) << endl;
	char c = 'f', d = 'x';
	cout << max(c, d) << endl;

	bool e = true, f = false;
	cout << max(e, f) << endl;
	return 0;
}

int max(int x, int y) {
	int bigger = x;
	if (x < y) {
		bigger = y;
	}

	return bigger;
}
char max(char x, char y) {
	char bigger = x;
	if (x < y) {
		bigger = y;
	}

	return bigger;
}
bool max(bool x, bool y) {
	bool bigger = x;
	if (x < y) {
		bigger = y;
	}

	return bigger;
}
/*
 测试用例：
举例能不能用心点，比bool 是什么鬼？
435 43
'f' 'x'
true false
435
x
1
 */
