#include <iostream>

int main()
{
    for (int i=1; i <=100; i++) {

        std::cout << i;

        if ((i % 5 && i % 3) == 0)
            std::cout << " ";

        if (i % 3 == 0)
            std::cout << "Fizz ";

        if (i % 5 == 0)
            std::cout << "Buzz ";

        std::cout << std::endl;
    }

    return 0;
}
