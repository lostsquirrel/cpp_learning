/*
 * nullCrashDemo.cpp
 *
 *  Created on: Nov 6, 2015
 *      Author: lisong
 */

#include <iostream>
struct Foo {
    int x;
    void bar() {
        std::cout << "La la la" << std::endl;
    }
    void baz() {
        std::cout << x << std::endl;
    }
};
int main() {
    Foo *foo = NULL;
    foo->bar(); // okay
    foo->baz(); // crash
}
