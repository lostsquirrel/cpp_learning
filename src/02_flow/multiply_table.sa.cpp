#include <iostream>
#include <iomanip>

using namespace std;
/*
 * 编写程序，打印九九乘法表
 *
 */
int main() {
	int i, j;
	/*  打印表头  */
	cout << "   Nine-by-nine Multiplication Table\n";
	cout << "---------------------------------------\n";
	cout << "  "; /*  两个空格，跳过最左列的竖排标志  */
	for (i = 1; i <= 9; ++i) /*  横排 1～9 标志  */
		cout << setw(4) << i;
	cout << "\n";
	cout << "---------------------------------------\n";
	/*  逐行打印  */
	for (i = 1; i <= 9; ++i) /*  共打印 9 行，i 为行号  */
	{
		cout << setw(2) << i; /*  最左列的竖排标志  */
		/*  共打印 9 列，j 为列号，只打印上三角，下三角使用空格填充  */
		for (j = 1; j <= 9; ++j) {
			if (j < i)
				cout << "    ";
			else
				cout << setw(4) << i * j;
		}
		cout << endl; /*  结束一行打印，换行  */
	}
	cout << "---------------------------------------\n";

	return 0;
}

/*
 测试用例：
 无
   Nine-by-nine Multiplication Table
---------------------------------------
     1   2   3   4   5   6   7   8   9
---------------------------------------
 1   1   2   3   4   5   6   7   8   9
 2       4   6   8  10  12  14  16  18
 3           9  12  15  18  21  24  27
 4              16  20  24  28  32  36
 5                  25  30  35  40  45
 6                      36  42  48  54
 7                          49  56  63
 8                              64  72
 9                                  81
---------------------------------------


 */
