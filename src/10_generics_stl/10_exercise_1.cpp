/*
 * 10_exercise_1.cpp
 *
 *  Created on: Nov 2, 2015
 *      Author: lisong
 */

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void) {

	multiset<string> ms;
	while(true) {
		string s;
		int counts = 0;
		cin>>s;
		if (s == "QUIT") {
			break;
		}
		counts = ms.count(s);
		cout<<counts<<endl;
		ms.insert(s);
	}
	return 0;
}
