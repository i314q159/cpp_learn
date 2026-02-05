#include "a.h"

#include <iostream>
#include <map>

void Test::a() {
    auto add1 = [](auto a, auto b) -> auto { return a + b - a; };

    std::map<std::string, int> map_A;

    for (auto i = 'a'; i <= 'z'; i++) {
        auto x = 1;
        auto sum1 = add1(x, i);

        // std::string(1, i) 是创建一个包含1个字符 i 的字符串
        // std::to_string 是 C++11 引入的标准库函数，用于将数值类型转换为字符串。
        map_A[std::string(1, i)] = sum1;
    }

    for (auto &p: map_A) {
        std::cout << p.first << ":" << p.second << std::endl;
    }

    b();
}

void Test::b() {
    std::cout << "Test::b" << std::endl;
}
