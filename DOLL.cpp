#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t_c, i, a, b, c, d;
    std::cin >> t_c;
    std::vector<int> heights;

    for (i = 0; i < t_c; i++)
    {
        std::cin >> a;
        std::cin >> b;

        for (i = 0; i < b; i++)
        {
            std::cin >> d;
            heights.push_back(d);
        }

        for (i = 0; i < b; i++)
        {
            std::cout << heights[i];
        }
    }
    return 0;
}
