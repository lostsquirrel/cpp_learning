#include <iostream>
using namespace std;
/*
 *编写函数 Compare，比较两个整型数据 x、y 的大小。若 x 等于 y 返回 0，若 x 大于 y 返回 1，若 x 小于 y 返回 -1
*/
int compare(int a, int b);

int main() {
	cout << compare(3, 5) << endl;
	cout << compare(-1, 0) << endl;
	cout << compare(0, 1) << endl;
	cout << compare(9, 2) << endl;
	cout << compare(-5, -8) << endl;
	cout << compare(99, 99) << endl;
    return 0;
}

int compare(int a, int b) {
	int res = 0;
	if (a > b) {
		res = 1;
	} else if ( a < b) {
		res = -1;
	}

	return res;
}
/*
测试用例：
3, 5
-1, 0
0, 1
9, 2
-5, -8
99, 99
-1
-1
-1
1
1
0

*/
