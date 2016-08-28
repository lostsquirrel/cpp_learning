#include <iostream>
using namespace std;
/*
 * 求自然数1～10之和
 */
int main() {
	int i = 1, sum = 0;
	while (i <= 10) {
		sum += i;  //相当于sum = sum + i;
		i++;
	}
	cout << "sum = " << sum << endl;
	return 0;
}

/*
 测试用例：
无 sum = 55

*/
