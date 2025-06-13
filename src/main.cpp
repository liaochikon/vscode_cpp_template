#include "main.hpp"

int main() 
{
    for (int i = 0; i < 100;i++)
    {
        std::cout << i << std::endl;
    }

    fmt::print("Hello, {}!\n", "world");
    return 0;
}