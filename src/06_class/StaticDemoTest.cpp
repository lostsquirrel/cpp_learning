//
// Created by lisong on 2019/1/29.
//
#include <iostream>
#include "StaticDemo.h"

using namespace std;

int main() {
    StaticDemo demo(123);

    cout << demo.f() << demo.g(demo) << endl;
//    demo.ax(789);
    cout << demo.f() << endl;
}
