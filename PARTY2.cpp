/* 
PROBLEM STATEMENT: 
Chef wants to give a burger party to all his N friends i.e. he wants to buy one burger for each of his friends.
The cost of each burger is X rupees while Chef has a total of K rupees.
Determine whether he has enough money to buy a burger for each of his friends or not.
*/

#include <iostream>

int main () {

    int i,t_c;

    int n,x,k;
    std::cin >> t_c;

    for (i = 0; i < t_c; i++) {

        std::cin >> n >> x >> k;
        
        if (k >= n*x) {
            std::cout << "YES\n";
        }

        else {
            std::cout << "NO\n";
        }

    }

}