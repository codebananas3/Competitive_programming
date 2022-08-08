/* 
PROBLEM STATEMENT: 
There is a circular track of length M consisting of M checkpoints and M bidirectional roads such that
each road has a length of 1 unit.
Chef is currently at checkpoint A and wants to reach checkpoint B. 
Find the minimum length of the road he needs to travel.
*/

#include <iostream>

int main () {

    int t_c,i,a,b,m;
    std::cin >> t_c;

    for (i = 0; i < t_c; i++) {
        std::cin >> a >> b >> m;

        int out1 = abs (a - b);
        int out2 = abs (out1 - m); 

        if (out1 < out2) {
            std::cout << out1 << "\n";
        }

        else {
            std::cout << out2 << "\n";
        }
    }

}