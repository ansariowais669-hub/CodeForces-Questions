#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    vector <string> s;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (abs(b - c) % 2 == 0 && abs(a - c) % 2 == 0 && abs(a - b) % 2 == 0)
            s.push_back("1 1 1") ;
        else if (abs(b - c) % 2 == 0 && abs(a - c) % 2 == 1 && abs(a - b) % 2 == 0)
            s.push_back("1 0 1") ;
        else if (abs(b - c) % 2 == 0 && abs(a - c) % 2 == 0 && abs(a - b) % 2 == 1)
            s.push_back("1 1 0") ;
        else if (abs(b - c) % 2 == 1 && abs(a - c) % 2 == 0 && abs(a - b) % 2 == 0)
            s.push_back("0 1 1") ;
        else if (abs(b - c) % 2 == 1 && abs(a - c) % 2 == 1 && abs(a - b) % 2 == 0)
            s.push_back("0 0 1") ;
        else if (abs(b - c) % 2 == 1 && abs(a - c) % 2 == 0 && abs(a - b) % 2 == 1)
            s.push_back("0 1 0") ;
        else if (abs(b - c) % 2 == 0 && abs(a - c) % 2 == 1 && abs(a - b) % 2 == 1)
            s.push_back("1 0 0") ;
    }
    for(auto val = s.begin() ; val != s.end() ; val++){
        cout << *(val) << endl ;
    }
}
