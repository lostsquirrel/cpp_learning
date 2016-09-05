#include <iostream>
using namespace std;
/*
 *编写函数 Add，求两个整数之和
*/
int add(int a, int b);

int main() {

	int a = 5, b = 9;
	cout << a << " + " << b << " = " << add(a, b) <<endl;
    return 0;
}

int add(int a, int b) {
	return a + b;
}
/*
测试用例：
5 + 9 = 14

*/
