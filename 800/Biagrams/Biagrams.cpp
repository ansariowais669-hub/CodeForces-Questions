#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t ;
    cin >> t ;
    vector <string> answer ;
    while(t--) {
        int k ;
        cin >> k ;
        int arr[k] ;
        int multiple = 0 ;
        int single = 0 ;
        for(int i=0 ; i<k ; i++) {
            cin >> arr[i] ;
            if(arr[i] >= 2) multiple++ ;
            if(arr[i] >= 3) single++ ;
        }
 
        if(single >= 1){
            answer.push_back("YES");
            continue ;
        }
 
        if(k>=2 && multiple >= 2){
            answer.push_back("YES") ;
            continue ;
        }
 
        answer.push_back("NO") ;
    }
 
    for(auto it : answer){
        cout << it << endl ;
    }
}
