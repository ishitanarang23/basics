#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bubble_sort(vector <int> vector){
    for (int i = 0 ; i < vector.size()  ; i++){
        for (int j = 0 ; j < vector.size() - 1 ; j++){
            if (vector[j] > vector[j+1]) {
                swap(vector[j], vector[j+1] ) ;
            }
        }
    }
    for (int p = 0 ; p < vector. size() ; p++){
        cout << vector[p] ;
    }
}

int main(){
    vector <int> vector ;
    int size ;
    cout << "size" ;
    cin >> size ;
    for (int i = 0 ; i < size ; i++){
        int element ;
        cin >> element ;
        vector.push_back(element) ;
    }
    bubble_sort(vector) ;
    return 0 ;
}
