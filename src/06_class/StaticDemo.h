//
// Created by lisong on 2019/1/29.
//

#ifndef CPP_LEARNING_STATICDEMO_H
#define CPP_LEARNING_STATICDEMO_H


class StaticDemo {
public:
    StaticDemo(int x);
    static int f();
    static void ax(int a);
    static int g( const StaticDemo & a );

private:
    static int a;
    int x;
};


#endif //CPP_LEARNING_STATICDEMO_H
