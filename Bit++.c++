#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> s;
        if (s == "++X" || s=="X++")
            c++;
        if(s == "--X" || s=="X--")
            c--;
    }
    cout<<c;
}