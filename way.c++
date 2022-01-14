#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string S;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> S;
        if (S.length() > 10)
            cout << S[0] << S.length() - 2 << S[S.length() - 1] << endl;
        else
            cout << S << endl;
    }
}