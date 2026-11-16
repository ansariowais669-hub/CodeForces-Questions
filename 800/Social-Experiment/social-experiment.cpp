#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    int length = t;
    int ans[t];
    int count = 0;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            if (n != 2)
            {
                ans[count] =0 ;
            }
            else
            {
                ans[count] =2 ; 
            }
        }
        else
        {
            if(n==3){
                ans[count] = 3;            
            }
            else{
            ans[count] =1;
            }
        }
        count ++ ;
    }
    for(int i =0 ; i< length ; i++){
        cout << ans[i] << endl;
    }
}
