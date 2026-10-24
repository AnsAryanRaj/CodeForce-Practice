
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter n: ";
    cin >> n;

    vector<int> a(n);
    cout<<"enter the elts. of vector: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }

        if (a[i] <= a[minIndex]) {
            minIndex = i;
        }
    }

    int ans = maxIndex + (n - 1 - minIndex); // ye formula no of counts of 
    // swap for maxIndex and minIndex ko add karne se milega

    if (maxIndex > minIndex) { // ye isliye likh rhe hai taki hum same swap do baar na count karle
        ans--;
    }

    cout << ans << endl;

    return 0;
}



