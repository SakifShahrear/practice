#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    multimap<string, int> m;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            string a;
            int x;
            cin >> a >> x;
            m.insert({a, x});
        }

        else if (c == 1)
        {
            string a;
            cin >> a;
            for (auto i = m.lower_bound(a); i != m.upper_bound(a); i++)
            {
                cout << i->second << endl;
            }
        }
        else if (c == 2)
        {
            string b;
            cin >> b;
            m.erase(b);
        }
        else if (c == 3)
        {
            string a, b;
            cin >> a >> b;
            for (auto i : m)
            {
                if (i.first >= a && i.first <= b)
                {
                    cout << i.first << " " << i.second << endl;
                }
            }
        }
    }
}
