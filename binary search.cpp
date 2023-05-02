#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binary_search(vector <int> vector , int n ,int size){
    sort(vector.begin(), vector.end()) ;

    int start = 0 ;
    int end = size - 1 ;
    int mid ;
    while (start <= end){
        mid = ( start + end ) / 2 ;
        if (vector[mid] == n ){
            return  mid ;
            break ;
        }
        else if ( vector[mid] > n ){
            end = mid - 1 ;
        }
        else if ( vector[mid] < n ){
            start = mid + 1 ;
        }
    }
    return -1 ;
}

int main() {
    vector <int> vector;
   int size;
   cout << "size" ;
   cin >> size ;
   int n;
   cout << "num" ;
   cin >> n;
   for (int i = 0 ; i < size ; i++){
       int a ;
       cin >> a ;
       vector.push_back(a) ;
   }
    int answer = binary_search(vector, n, size) ;
    if(answer != 1){
        cout << "number is present at the index" << " " << answer ;
    }
    else{
        cout << "number is not present int the given array" ;
    }

    return 0;
}

