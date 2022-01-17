#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int el, min = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> el;
            if (el == 1){
                if(i - 2 < 0){
                    min += (i - 2) * -1;
                }else{
                    min += i - 2;
                }
                if(j - 2 < 0){
                    min += (j - 2) * -1;
                }else{
                    min += j - 2;
                }
                cout << min;
                return 0;
            }
        }
    }
}