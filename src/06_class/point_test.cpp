//
// Created by lisong on 2019/1/26.
//
#include <string>
#include <iostream>
#include "point.h"

using  namespace std;

int main() {
    Point* p = new Point(8, 9);
//    p.SetValue(9, 8);

    int a, b;
    p->GetValue(&a, &b);
    cout << "a =" << a << ", b = " << b << endl;
    cout << "ToString" << p->ToString() << endl;
    p->Print();
};
