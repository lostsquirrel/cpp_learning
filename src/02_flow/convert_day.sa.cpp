#include <iostream>
using namespace std;
/*例2-4：输入一个0～6的整数，转换成星期输出*/
int main() {
	int day;
	cout << "输入一个0～6的整数:";
	cin >> day;
	switch (day) {
	case 0:
		cout << "Sunday" << endl;
		break;
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	default:
		cout << "Day out of range Sunday .. Saturday" << endl;
		break;
	}
	return 0;
}
/*
测试用例：
-1	Day out of range Sunday .. Saturday
0	Sunday
1   Monday
3	Wednesday
6	Saturday
7	Day out of range Sunday .. Saturday
99999999999999999999999 Day out of range Sunday .. Saturday

*/
