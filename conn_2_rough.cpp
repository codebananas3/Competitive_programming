#include <iostream>
using namespace std;

int main()
{

    int t_c, i, a, b, c;
    std::cin >> t_c;

    for (i = 0; i < t_c; i++)
    {
        std::cin >> a;
        bool yn = false;
        while (a > 2)
        {
            if (a % 2 == 0 || a % 7 == 0)
            {
                yn = true;
                break;
            }
            a = a - 2;
        }

        if (yn == true)
        {
            std::cout << "YES\n";
        }

        else
        {
            std::cout << "NO\n";
        }

        return 0;
    }
}