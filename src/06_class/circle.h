//
// Created by lisong on 2019/1/26.
//

#ifndef CPP_LEARNING_CIRCLE_H
#define CPP_LEARNING_CIRCLE_H

#endif //CPP_LEARNING_CIRCLE_H

class Circle {
public:
    double GetRadius();
    void SetRadius(double r);
    double GetPerimeter();
    double GetArea();

    inline void GetOrigin(double *x, double *y) {
        *x = this->x;
        *y = this->y;
    }
    inline void SetOrigin(double x, double y) {
        this->x = x;
        this->y = y;
    }

private:
    double x;
    double y;
    double r;
};