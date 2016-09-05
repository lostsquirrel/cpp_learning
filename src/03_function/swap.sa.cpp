#include <iostream>
using namespace std;
/*
 *编写函数 Swap，互换两个整型数据 x、y 的值
*/
void swap(int &a, int &b);
int main() {
	int a = 3, b = 5;
	swap(a, b);
	cout << a << b << endl;
	int c = -3, d = 6;
	swap(c, d);
	cout << c << d  << endl;
    return 0;
}
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
/*
测试用例：
3,5
-3, 6

53
6-3

挑战问题：如何在不使用临时中转变量的情况下互换两个整型变量的值？
通过位 与和或
懒得折腾
*/
