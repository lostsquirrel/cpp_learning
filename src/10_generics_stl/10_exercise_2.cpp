/*
 * 10_exercise_2.cpp
 *
 *  Created on: Nov 2, 2015
 *      Author: lisong
 */

#include <iostream>
#include <set>
using namespace std;

int main(void) {

	int n;
	cin>>n;
	set<int> s;
	while(n--) {
		int x;
		cin>>x;
		s.insert(x);
	}
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout<<*it<<endl;;
	}
	return 0;
}
