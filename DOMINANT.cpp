/* 
PROBLEM STATEMENT: 
In the medieval age, there were 3 kingdoms A, B, and C. The army of these kingdom had NA, NB, and NC soldiers respectively.
You are given that an army with X soldiers can defeat an army with Y soldiers only if X>Y.
An army is said to be dominant if it can defeat both the other armies combined. For example, kingdom C's army will be dominant only if NC>NA+NB.
Determine whether any of the armies is dominant or not.
*/

#include <iostream>

int main () {

    int t_c,i,a,b,c;
    std::cin >> t_c;

    for (i = 0; i < t_c; i++) {

        std::cin >> a >> b >> c;
        
        if (a > b + c || b > a + c || c > a + b) {
            std::cout << "YES\n";
        }

        else {
            std::cout << "NO\n";
        }

    }
}