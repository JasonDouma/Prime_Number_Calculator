#include <iostream>

int main()
{
    int Num;
    bool prime = true;

    do
    {
        std::cout << "Enter A Integer From 1 - 1 000 000" << std::endl;
        std::cin>>Num;
    }
    while (Num<1 || Num>1000000);

    for ( int j = 2; j <=1000000; j++)
        for (int i=2; i<Num; i++)
        {
            {
                if (Num%i == 0)
                {
                    prime = false;
                    break;
                }
            }

        }

    if (prime == false)
    {
        std::cout << "======\n";
        std::cout <<Num << " Is Not Prime" << std::endl;
        std::cout << "======\n";
    }
    else
    {
        std::cout << "======\n";
        std::cout <<Num << " Is Prime" << std::endl;
        std::cout << "======\n";
    }

    return 0;
}
