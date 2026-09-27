#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;

    vector <bool> ans ;

    while(t--){
        int n ;
        cin >> n ;
        int arr[n] ;

        for(int i=0 ; i<n ; i++) cin >> arr[i] ;

        vector <int> arr1 ;
        vector <int> arr2 ;

        int index = 1 ;

        for(int i=0 ; i<n ; i++){
            if(arr[i] == index) arr1.push_back(arr[i]) ;
            else {
                arr2.push_back(arr[i]) ;
                arr1.push_back(-1) ;
            }
            index++ ;
        }

        int size = arr2.size() - 1 ;

        index = 1 ;

        bool flag = true ;

        for(int i=0 ; i<n ; i++){
            if(arr1[i] == index) {
                index++ ;
                continue ;
            }

            else if (arr1[i] == -1){
                if(arr2[size--] == index) {
                    index++ ;
                    continue ;
                }
                flag = false ;
                break ;
            } else {
                flag = false ;
                break ;
            }
        }

        ans.push_back(flag) ; 
    }

    for(auto it : ans){
        if(it) cout << "YES\n" ;
        else cout << "NO\n" ;
    }
}
