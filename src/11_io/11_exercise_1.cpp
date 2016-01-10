/*
 * 11_exercise_1.cpp
 *
 *  Created on: Nov 15, 2015
 *      Author: lisong
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void printNum(int m, int n, double num) {
	if (m == 0 && n == 0) {
		cout << 0 << endl;
	} else if (n == 0) {
		cout << setw(m) << setfill('0') << setprecision(n) << fixed << num
			<< endl;
	} else if (m == 0) {
		cout <<  setfill('0') << setprecision(n) << fixed << num - int(num)
					<< endl;
	} else {
		cout << setw(m + n + 1) << setfill('0') << setprecision(n) << fixed
				<< num << endl;
	}
}

int main(void) {

	int m, n, x;
	double num;
	cin >> m >> n >> num;
	printNum(m, n, num);
//	// m = 0 , n = 0
//	printNum(0, 0, M_PI);
//	// m != 0, n = 0
//	printNum(3, 0, M_PI);
//	// m == 0, n != 0
//	printNum(0, 3, M_PI);
//	// m != 0, n != 0
//	printNum(1, 2, M_PI);
//	// m != 0, n != 0
//	printNum(5, 5, M_PI);
//	printNum(3, 99, M_PI);
	return 0;
}
