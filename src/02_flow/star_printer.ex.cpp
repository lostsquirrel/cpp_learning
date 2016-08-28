#include <iostream>
using namespace std;
/*
2.1  使用循环结构打印下述图形，打印行数n由用户输入。图中每行事实上包括两部分，中间间隔空格字符数m也由用户输入。

    *    *********
   ***    *******
  *****    *****
 *******    ***
*********    *

解题思路：
输入为行数， 需要计算
1. 每行开始的空格数 （行数 - 行号）
2. 每行第一组 * 数 （行号 * 2 - 1）， 和第二组*数 （行数 - (行号 - 1)） * 2 - 1
因为有明确边界，递增 使用for
*/
int main() {
	int line, n, m;
	cout << "请输入打印行数: ";
	cin >> n;
	cout << "请输入隔空格字符数: ";
	cin >> m;

	for (line = 1; line <= n; line++) {
		int j;
		// 打印开始空
		for (j = 0; j < (n - line); j++) {
			cout << " ";
		}
		// 打印前部*
		for (j = 0; j < (line * 2 -1); j++) {
			cout << "*";
		}
		// 打印中间空
		for (j = 0; j < m; j++) {
			cout << " ";
		}
		// 打印后部*
		for (j = 0; j < ((n - (line - 1)) * 2 - 1); j ++) {
			cout << "*";
		}
		// 换行
		cout << endl;
	}
    return 0;
}

/*
测试用例：
-1 -1
------------
0 0
----------------------------
1 1
* *
------------------
3 3
  *   *****
 ***   ***
*****   *

----------------------
请输入打印行数: 5
请输入隔空格字符数: 5
    *     *********
   ***     *******
  *****     *****
 *******     ***
*********     *

*/
