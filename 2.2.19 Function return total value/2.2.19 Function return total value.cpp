#include <iostream>

int ReturnValue(int x);

int main()
{

    std::cout << ReturnValue(5) << std::endl;
    std::cout << ReturnValue(6) << std::endl;
    std::cout << ReturnValue(66) << std::endl;
    std::cout << ReturnValue(22) << std::endl;
}

int ReturnValue(int x)
{
    static int value = 0;
    value += x;

    return value;
}
