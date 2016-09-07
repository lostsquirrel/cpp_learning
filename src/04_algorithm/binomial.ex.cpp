#include <iostream>
using namespace std;
/*
 * 0402
 * 设计算法，分别使用循环和递归两种策略求二项式系数C(n,k)。其中，n为自然数，k为不大于n的非负整数。
 * 根据 二项式公式  n!/k!(n - k)!
*/
long factorial_iterator_version(int base);
long factorial_recurse_version(int base);
int main() {
//	测试阶乘
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
		cout << factorial_iterator_version(i) << endl;
		cout << factorial_recurse_version(i) << endl;
		cout << "------------" << endl;
	}
	int n;

    return 0;
}

long factorial_iterator_version(int base) {
	long fact = 1;
	int step = 1;
	while(step < base) {
		step++;
//		cout << endl  	bug:fact " << fact << endl;
		fact *= step;
	}
	return fact;
}

long factorial_recurse_version(int base) {
	int fact = 1;
	if (base > 1) {
		fact = base * factorial_recurse_version(base - 1);
	}

	return fact;
}
/*
测试用例：


*/
