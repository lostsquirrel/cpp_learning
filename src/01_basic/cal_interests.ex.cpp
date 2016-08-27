# include <iostream>

using namespace std;
/*

1.2  编制程序完成下述任务。接受两个数，一个为用户一年期定期存款金额，
一个为按照百分比格式表示的一年期定期存款年利率。程序计算一年期满后本金与利息总额。
说明：（1）存款金额以人民币元为单位，精确到分；
（2）输入利率时不需要输入百分号，例如一年期定期存款年利率为2.52%，用户输入2.52即可；
3）输出数据如何精确到分？

*/
int main() {

	int sum;
	float amount, rate;

	cout << "请输入款金额：";
	cin >> amount;

	cout << "请输入年利率：";
	cin >> rate;

	sum = amount * (100 + rate);
	cout << "一年期满后本金与利息总额:" << sum / 100.0 <<endl;

	return 0;
}
