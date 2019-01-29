//
// Created by lisong on 2019/1/29.
//

#include "StaticDemo.h"

StaticDemo::StaticDemo(int x) {
    this->x = x;
}

int StaticDemo::a = 456;
//void ax(int a){
//    int StaticDemo::a = a;
//}
int StaticDemo::f() {
    return a;
}

int StaticDemo::g(const StaticDemo &s) {
    return s.x;
}