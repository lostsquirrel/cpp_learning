//
// Created by lisong on 2019/1/26.
//

#ifndef CPP_LEARNING_POINT_H
#define CPP_LEARNING_POINT_H

#endif //CPP_LEARNING_POINT_H

#include <string>

using namespace std;

class Point {
public:
    Point(int x, int y);
    ~Point();
    void GetValue(int *x, int *y);
    void SetValue(int x, int y);
    bool Compare(const Point &point);
    string ToString();
    void Print();

private:
    int x;
    int y;
};