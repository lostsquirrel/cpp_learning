#include <iostream>
using namespace std;
/*
 *编写函数gcd与lcm，分别求两个正整数的最大公约数与最小公倍数。
 */
int gcd(int a, int b);
int lcm(int a, int b);
int min(int a, int b);
bool is_divisible(int a, int b);
int main() {
	cout << gcd(6, 12) <<endl;
	cout << lcm(6, 12) <<endl;
	cout << gcd(5, 7) <<endl;
	cout << lcm(5, 7) <<endl;
	return 0;
}

int min(int a, int b) {
	int smaller = a;
	if (b < a) {
		smaller = b;
	}
	return smaller;
}

int gcd(int a, int b) {
	int gcd = 1;
	int x = 2;
	int limit = min(a, b);
	while (x <= limit) {
		if (is_divisible(a, x) && is_divisible(b, x)) {
			a /= x;
			b /= x;
			gcd *= x;
		}
		x++;
	}
	return gcd;
}

int lcm(int a, int b) {
	int lcm = 1;
	int x = 2;
	int limit = min(a, b);
	while (x <= limit) {
		if (is_divisible(a, x) && is_divisible(b, x)) {
			a /= x;
			b /= x;
			lcm *= x;

		}
		x++;
	}
	return lcm * a * b;
}

bool is_divisible(int a, int b) {
	return !(a % b);
}
/*
 测试用例：


 */
