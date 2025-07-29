#include <iostream>

void sumTo(const int i)
{
    int sum{};
    for (int j{1}; j < i; ++j)
    {
        std::cout << j << " + ";
        sum += j;
    }
    std::cout << i << " = " << sum + i;
}

int main()
{
    int i{};
    std::cout << "Enter an Integer: ";
    std::cin >> i;
    sumTo(i);

    return 0;
}