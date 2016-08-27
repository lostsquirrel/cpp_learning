# include <iostream>

using namespace std;
/*
编写程序，接受用户输入的10个整数，输出它们的和。
*/

int main() {
	int a, b, c, d, e, f, g, h, i, j;

	cout << "请输入第10个数：";
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;

	cout << a << " + " << b << " + " << c << " + " << d
			<< " + " << e << " + " << f << " + " << g << " + "
			<< h << " + " << i << " + " << j << " = "
			<< a + b + c + d + e + f + g + h + i + j <<endl;

	return 0;
}
