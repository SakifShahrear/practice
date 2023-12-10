#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d, f = 0, g = 0, c = 0, flag = 0;
        cin >> n;
        if (n < 7 || n == 9)
            cout << "NO" << endl;
        else
        {
            k = n - 3;
            if (k >= 2)
            {
                if (k % 3 != 0)
                {
                    cout << "YES" << endl
                         << "1 2 " << k << endl;
                    c = 1;
                }
            }
            d = n - 5;
            if (d >= 4 && c == 0)
            {
                if (d == 4)
                    f = 1;
                else if (d % 3 != 0)
                {
                    cout << "YES" << endl
                         << "1 4 " << d << endl;
                    flag = 1;
                }
            }
            if (c == 0)
            {
                if (flag == 0)
                    cout << "NO" << endl;
            }
        }
    }
}
