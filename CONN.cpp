/*
PROBLEM STATEMENT:
You are given an integer NN. Find if it is possible to represent NN as the sum of several(possibly zero) 22's and several(possibly zero) 77's.

Formally, find if there exist two integers X, Y (X, Y >= 0) such that 2 * X + 7 * Y = N.
*/

#include <iostream>

int main()
{

    int t_c, i, a, b, c;
    std::cin >> t_c;

    for (i = 0; i < t_c; i++)
    {
        std::cin >> a;
        if (a < 7)
        {
            if (a % 2 == 0)
            {
                std::cout << "YES\n";
            }

            else
            {
                std::cout << "NO\n";
            }
        }

        if (a > 7)
        {
            b = a % 7;
            if (b % 2 == 0)
            {
                std::cout << "YES\n";
            }
            else
            {
                std::cout << "NO\n";
            }
        }

        if (a == 7)
        {
            std::cout << "YES\n";
        }
    }
}