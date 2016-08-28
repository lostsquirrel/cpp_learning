#include <iostream>
using namespace std;
/*
 *
 */
int main() {
	int n, right_digit, newnum = 0;
	cout << "Enter the number: ";
	cin >> n;
	cout << "The number in reverse order is  ";
	do {
		right_digit = n % 10;
		cout << right_digit;
		n /= 10; /*相当于n=n/10*/
	} while (n != 0);
	cout << endl;

	return 0;
}

/*
 测试用例：
-1	The number in reverse order is  -1
1	The number in reverse order is  1
123	The number in reverse order is  321
213 The number in reverse order is  312
321	The number in reverse order is  123
9876543219876554321	The number in reverse order is  7463847412
 */
