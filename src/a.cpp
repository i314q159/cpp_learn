#include "a.h"

#include <iostream>
#include <map>

auto Test::a() -> void{
    auto add1 = [](auto a, auto b) -> auto { return a + b - a; };

    std::map<std::string, int> map_A;

    for (auto i = 'a'; i <= 'z'; i++) {
        auto x = 1;
        auto sum1 = add1(x, i);

        map_A[std::string(1, i)] = sum1;
    }

    for (const auto& [x, y] : map_A) {
        std::cout << x << ":" << y << std::endl;
    }

    b();
}

auto Test::b() -> void{
    std::cout << "Test::b" << std::endl;
}
