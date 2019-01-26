//
// Created by lisong on 2019/1/26.
//

#ifndef CPP_LEARNING_CIRCLE_H
#define CPP_LEARNING_CIRCLE_H

#endif //CPP_LEARNING_CIRCLE_H

class Circle {
public:
    void GetOrigin(double *x, double *y);
    void SetOrigin(double x, double y);
    double GetRadius();
    void SetRadius(double r);
    double GetPerimeter()
    double GetArea();

private:
    double x;
    double y;
    double r;
};