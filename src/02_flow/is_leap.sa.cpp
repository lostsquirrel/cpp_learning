#include <iostream>
using namespace std;
/*
例2-2输入一个年份，判断是否闰年
*/

int main() {
	int year;
	bool isLeap;
	cout << "Enter the year: ";
	cin >> year;
	isLeap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	if (isLeap)
		cout << year << " is a leap year" << endl;
	else
		cout << year << " is NOT a leap year" << endl;
	return 0;
}
/*
测试用例：
-1 -1 is NOT a leap year
0   0 is a leap year
1616 1616 is a leap year
2014 2014 is NOT a leap year
2000 2000 is a leap year
2100 2100 is NOT a leap year
999999999999999999999999 2147483647 is NOT a leap year
*/
