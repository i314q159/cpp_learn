#include "a.h"

#include <iostream>

void Test::a() {
    auto add1 = [](auto a, auto b) -> auto {
        return a + b - a;
    };

    for (auto i = 'a'; i <= 'z'; i++) {
        auto x = 1;
        auto sum1 = add1(x, i);

        // std::string(1, i) 是创建一个包含1个字符 i 的字符串
        // std::to_string 是 C++11 引入的标准库函数，用于将数值类型转换为字符串。
        auto str1 = std::string(1, i) + ":" + std::to_string(sum1);
        std::cout << str1 << std::endl;
    }
    b();
}

void Test::b() {
    std::cout << "Test::b" << std::endl;
}
