#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    n++;

    while(true) {// we have only find the four digits bcoz the year can be between 1000-9000;
        int a = n / 1000;
        int b = (n / 100) % 10;
        int c = (n / 10) % 10;
        int d = n % 10;

        if(a != b && a != c && a != d &&
           b != c && b != d &&
           c != d) {
            cout << n;
            break;
        }

        n++;
    }

    return 0;
}