#include <memory>
#include <iostream>

void RunUniquePtr()
{
    auto hp = std::make_unique<int>(100);
    std::cout << *hp << std::endl;
    *hp = 300;
    std::cout << *hp << std::endl;
}