/* 
PROBLEM STATEMENT: 
The first line of the input contains an integer T, the number of test cases.
T lines follow. Each line contains an integer N whose square root needs to be computed.
*/

#include <iostream>
#include <math.h>

int main () {

    int t_c,i;
    std::cin >> t_c;

    for (i = 0; i < t_c; i++) {

        int a;
        std::cin >> a; 

        int b = sqrt(a);
        std::cout << b << "\n";
    }

}