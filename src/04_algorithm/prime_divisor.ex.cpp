#include <iostream>
using namespace std;
/*
 *  0401 设计算法，将某个大于1的自然数n分解为其素因子的乘积，如6=2*3，7=7，8=2*2*2。
 *  基础：这个数要么是一个素数，要么能比一个比它小的素数整除
*/
bool is_prime(int a);
bool is_possible_prime(int a);
void prime_divide(int a);
int next_prime(int num);
int main() {
	int num;
	cout << "输入要分解的数n:" << endl;
	cin >> num;
	cout << num << " = ";
	prime_divide(num);
	cout << endl;
    return 0;
}
void prime_divide(int a) {
//	cout << endl <<"debug:" << a << endl;
	if (a < 2) {
		cout << "请输入某个大于1的自然数" << endl;
		return
	}
	if (is_prime(a)) {
		cout << a ;
	} else {
		int x = 1;
		do {
			x = next_prime(x);
			if (a % x == 0) {
				break;
			}
		} while(x < a);
//		cout << endl <<"debug:" << x << endl;
		cout << x << "*";
		prime_divide(a / x);

	}
}
int next_prime(int num) {
	int prime = num;

	do {
		prime += 1;
	} while (!is_prime(prime));

	return prime;
}
bool is_possible_prime(int a) {
	bool res = true;
	if (a < 2) {
		cout << "不是大于2的正整数" <<endl;
		res = false;
	}
	return res;
}

bool is_prime(int a) {
	bool res = true;

	if (is_possible_prime(a)) {
		for(int i = 2; i <= a / 2; i++) {
			if (a % i == 0) {
				res = false;
				break;
			}
		}
	} else {
		res = false;
	}

	return res;
}
/*
测试用例：


*/
