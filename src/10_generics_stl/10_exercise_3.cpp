/*
 * 10_exercise_3.cpp
 *
 *  Created on: Nov 2, 2015
 *      Author: lisong
 */

#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(void) {
	string x,y;
	cin>>x>>y;
	vector<string> subs;

	for (int it = 0; it < x.size() - y.size() + 1; it++) {
		subs.insert(subs.begin() + it, x.substr(it, y.size()));
	}
	cout<<count(subs.begin(), subs.end(), y);
	return 0;
}
