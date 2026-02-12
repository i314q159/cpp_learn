#include "a.h"

#include <iostream>
#include <map>

using namespace std;

// map
auto Test::a() -> void{
    auto add1 = [](auto a, auto b) -> auto { return a + b - a; };

    map<string, int> map_A;

    for (auto i = 'a'; i <= 'z'; i++) {
        auto x = 1;
        auto sum1 = add1(x, i);

        map_A[string(1, i)] = sum1;
    }

    for (const auto& [x, y] : map_A) {
        cout << x << ":" << y << endl;
    }

    b();
}

// class private
auto Test::b() -> void{
    cout << "Test::b" << endl;
}
