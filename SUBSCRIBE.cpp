/* 
PROBLEM STATEMENT: 
Chef wants to conduct a lecture for which he needs to set up an online meeting of exactly X minutes.
The meeting platform supports a meeting of maximum 30 minutes without subscription and a meeting of unlimited duration with subscription.
Determine whether Chef needs to take a subscription or not for setting up the meet.
https://www.codechef.com/submit/SUBSCRIBE
*/

#include <iostream>

int main () {

    int i,t_c;
    std::cin >> t_c;

    for (i = 0; i < t_c; i++) {

        int time;

        std::cin >> time;

        if (time > 30) {
            std::cout << "YES\n";
        }

        else {
            std::cout << "NO\n";
        }

    }

}
