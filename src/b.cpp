#include "b.h"

#include <iostream>

using namespace std;

auto b() -> void {
    int x = 20;
    int *y;
    y = &x;

    cout << "x address: " << &x << endl;
    cout << "y address: " << y << endl;

    cout << "x: " << x << endl;
    cout << "y: " << *y << endl;
}
