//
// Created by lisong on 2019/1/26.
//
#include <iostream>
#include "point.h"

using namespace std;

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

Point::~Point() {
    cout << "Point (" << x << ", " << y << ") destructed" <<endl;
}

void Point::GetValue(int *x, int *y) {
    *x = this->x;
    *y = this->y;
}

void Point::SetValue(int x, int y) {
    this->x = x;
    this->y = y;
}

bool Point::Compare(const Point &point) {
    return this->x == point.x && this->y == point.y;
}

string Point::ToString() {
    return "Point ";
}

void Point::Print() {
    cout << "(" << x << ", " << y << ")" <<endl;
}