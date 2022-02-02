#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    string ss;
    cin >> s;
    cin >> ss;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < 92)
        {
            s[i] += 32;
        }
        if (ss[i] < 92)
        {
            ss[i] += 32;
        }
    }
    if (s > ss)
        cout << 1;
    if (s < ss)
        cout << -1;
    if (s == ss)
        cout << 0;
}