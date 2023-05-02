#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void search(vector <int> array, int number){
    for (int i = 0 ; i<array.size() ; i++){
        if(array[i] == number){
            cout << "number is present";
        }

        else{
            cout << "number is not present";
        }
    }

}

int main(){

    vector <int> array;
    int length;
    cout << "enter length";
    cin >> length;
    for (int i = 0 ; i < length ; i++){
        int element;
        cout << "enter element";
        cin >> element;
        array.push_back(element);
    }

    int number;
    cout << "enter number ";
    cin >> number;
    int a = search(array,number);
    cout << a;
}