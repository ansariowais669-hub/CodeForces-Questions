#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    int u = 0;
    cin >> t;
    int y = t;
    string yes_no[t];
    while (t--)
    {
        string s;
        cin >> s;
        int l = s.length();
        int opern = 0;
        // string s2;
        do
        {
            opern = 0;
            if (s.length() <= 1)
                break;
            for (int i = 0; i < (s.length() - 1); i++)
            {
                char c1 = s[i], c2 = s[i + 1];
                if (c1 == 'Y' && c2 == 'Y')
                {
                    continue;
                }
                else if (c1 == 'Y' || c2 == 'Y')
                {
                    s.erase(i, 2);
                    s.insert(i, 1, 'Y');
                    opern++;
                }
                else if (c1 == 'N' && c2 == 'N')
                {
                    s.erase(i, 2);
                    s.insert(i, 1, 'N');
                    opern++;
                }
                // if(opern>=1){
                //     i=0;
                // }
            }
        } while (opern);
        // int u = 0;
        if (s.length() == 1)
        {
            yes_no[u] = "YES";
            u++;
        }
        else
        {
            yes_no[u] = "NO";
            u++;
        }
    }
    for (int e = 0; e < y; e++)
    {
        cout << yes_no[e] << "\n";
    }
}
