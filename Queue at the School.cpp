#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
    int n, t;
    cin >> n;
    cin>>t;
    string s;
    cin>>s;

    while (t>0)
    {
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {

                swap(s[i], s[i + 1]); // swapping hone pe uss time me hi update ho gya

                i++; // loop ke andar hi i ki value update ho gyi
            }
        }
        t--; // ek second complete ho gya;;
    }
    cout<<s;


    return 0;
}

// Note - This is a good conceptual question and important for logic building