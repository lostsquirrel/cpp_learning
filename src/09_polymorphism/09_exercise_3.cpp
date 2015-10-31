#include <iostream>
#include <string>
#include <fstream>
using namespace std;

template<class T, int MAX>
class Stack {
private:
	T list[MAX + 1];
	int top;
public:
	Stack();
	void push(const T &item); //将item压栈
	T pop(); //将栈顶元素弹出栈
	const T & peek() const; //访问栈顶元素
	bool isEmpty() const; //判断是否栈空
	void clear();
};

//请完成栈模板类的实现，并解决括号匹配问题
template<class T, int MAX>
Stack<T, MAX>::Stack() {
	top = 0;
}

template<class T, int MAX>
void Stack<T, MAX>::push(const T &item) {
	list[top] = item;
	top++;
}
template<class T, int MAX>
T Stack<T, MAX>::pop() {
	top--;
	return list[top];
}

template<class T, int MAX>
const T & Stack<T, MAX>::peek() const {
	return list[top - 1];
}

template<class T, int MAX>
bool Stack<T, MAX>::isEmpty() const {
	return top == 0;
}
template<class T, int MAX>
void Stack<T, MAX>::clear() {
	top = 0;
}

int main() {

	char c;
	Stack<char, 1000> stack;
	bool tag = true;
	while ((c = getchar())) {
//		cout<<c<<endl;
		if (c == '(') {
			stack.push(c);
		} else if (c == ')') {
			if (!stack.isEmpty())
				stack.pop();
			else {
				if (tag) {
					cout << endl;
					tag = false;
				}
				cout << "No" << endl;
				break;
			}

		} else if (c == '\n' || c == EOF) {
//			cout<<c<< "\n";
			if (tag) {
				cout << endl;
				tag = false;
			}
			if (stack.isEmpty()) {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
			stack.clear();
			if (c == EOF)
				break;
		}

	}
}
