//
// Created by lisong on 2019/1/26.
//

#include <iostream>
#include "circle.h"

using  namespace std;

int main() {
    Circle c;
    c.SetOrigin(0, 0);
    c.SetRadius(9);
    cout << "Circle Perimeter: " << c.GetPerimeter() << endl;
    cout << "Circle Area: " << c.GetArea() << endl;
    return 0;
}
