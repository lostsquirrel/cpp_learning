#include <iostream>
using namespace std;

class Base1
{
public:
    int x;
    Base1(int x);
    Base1(const Base1& b1);
};

class Base2
{
public:
    int x;
    Base2(int x);
    Base2(const Base2& b2);
};

class Derived:public Base1, public Base2
{
public:
    int x;
    Derived(Base1& a, Base2& b);
};

//请实现Base1，Base2, Derived的构造函数
Base1::Base1(int x):x(x) {

}
Base1::Base1(const Base1& b2):x(b2.x) {

}
Base2::Base2(int x):x(x) {

}
Base2::Base2(const Base2& b2):x(b2.x) {

}
Derived::Derived(Base1& a, Base2& b): Base1(a.x), Base2(b.x), x(a.x + b.x){
}
int main()
{
    int x, y;
    cin >> x >> y;
    Base1 a(x);
    Base2 b(y);
    Derived d(a, b);
    cout << d.Base1::x << "+" << d.Base2::x << "=" << d.x << endl;
    return 0;
}
