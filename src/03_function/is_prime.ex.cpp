#include <iostream>
using namespace std;
/*
 *编写函数IsPrime，判断某个大于2的正整数是否为素数。
*/
bool is_prime(int a);
bool is_possible_prime(int a);
int main() {
	for (int i = -3; i < 30; i++) {
		cout << i << " is " << (is_prime(i) ? "" : " not ") << "a prime" << endl;
	}
    return 0;
}

bool is_possible_prime(int a) {
	bool res = true;
	if (a <= 2) {
		cout << "不是大于2的正整数";
		res = false;
	}
	return res;
}

bool is_prime(int a) {
	bool res = true;
	if (is_possible_prime(a)) {
		for(int i = 3; i <= a / 2; i++) {
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
不是大于2的正整数-3 is  not a prime
不是大于2的正整数-2 is  not a prime
不是大于2的正整数-1 is  not a prime
不是大于2的正整数0 is  not a prime
不是大于2的正整数1 is  not a prime
不是大于2的正整数2 is  not a prime
3 is a prime
4 is a prime
5 is a prime
6 is  not a prime
7 is a prime
8 is  not a prime
9 is  not a prime
10 is  not a prime
11 is a prime
12 is  not a prime
13 is a prime
14 is  not a prime
15 is  not a prime
16 is  not a prime
17 is a prime
18 is  not a prime
19 is a prime
20 is  not a prime
21 is  not a prime
22 is  not a prime
23 is a prime
24 is  not a prime
25 is  not a prime
26 is  not a prime
27 is  not a prime
28 is  not a prime
29 is a prime



*/
