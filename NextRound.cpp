#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];

    for(int i = 0; i < n; i++) {  //Note-- array ki indexing humesa 0 se shuru hoti h 
        cin >> arr[i];
    }

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= arr[k - 1] && arr[i] > 0) {  // Note-- yha hum arr[k] nhi use kar skte bcoz indexing 0 se shuru hai isliye [k-1] likhenge 
            count++;
        }
    }

    cout << count << endl;

    return 0;
}