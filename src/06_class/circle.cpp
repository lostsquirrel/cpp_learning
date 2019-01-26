//
// Created by lisong on 2019/1/26.
//

#include <iostream>
#include "circle.h"

const double pi = 3.141592653589793;

double Circle::GetRadius() {
    return this->r;
}

void Circle::SetRadius(double r) {
    this->r = r;
}

double Circle::GetPerimeter() {
    return 2 * r * pi;
}

double Circle::GetArea() {
    return pi * r * r;
}