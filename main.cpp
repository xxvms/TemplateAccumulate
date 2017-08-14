#include <iostream>
#include "Accum.h"

int main() {
    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    std::cout << integers.GetTotal() << '\n';

    Accum<std::string> strings("");
    strings += "hello";
    strings += " world";

    std::cout << strings.GetTotal() << '\n';

    return 0;
}