//
// Created by lisong on 2019/1/28.
//

#ifndef CPP_LEARNING_CONST_DEMO_H
#define CPP_LEARNING_CONST_DEMO_H


class ConstDemo {
public:
    ConstDemo(double value);
    ConstDemo(): constValue(3.14){};
    double GetConstValue() const;

private:
    double const constValue;
};


#endif //CPP_LEARNING_CONST_DEMO_H
