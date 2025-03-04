#include<bits/stdc++.h>
using namespace std;

// PROBELM-1 count elements of arr[]
void hashing(){
    int arr[5] = {1,2,1,0,2};
    int hash[12] = {0}; //making a hash array of all elements 0 
    // remeber the size of hash array has to be to atleast the highest number a user may ask for count of
    for(int i=0; i<5;i++){
        hash[arr[i]] +=1; //arr[i] takes me to the number and hash[number] will inc it's occurence by 1
    }

    cout << hash[7] << endl;
    cout<< hash[2] << endl;
    cout << hash[11] << endl;
    cout << hash[0] << endl;

}
// APrroach 2 {MAP}
/*
as we know map store a value to a key, value here can be the count and key as the element
also in map I won't have to predefine the size of the map so I can add as much as i can
without the need of any prequisite

let's see hoow it goes
*/

void hashing2(){
    int arr[] = {22,5,1,3,3,1,3,67,23,3};
    map<int, int>mpp;
    for(int i=0;i<10;i++){
        mpp[arr[i]]++; 
        /* 
        above line basically will add the element if not present
        and keep on inc the value as.. mpp[x] gives us the value of key x
        */
    }
    for(int i=1; i<6;i++){
        cout << mpp[i]<< " ";
    }
    cout << endl;

    // iterating in the map
    for(auto it : mpp){
        cout << it.first << "-> " << it.second << endl;
    }
}

// in above statement unordered_map is better cause
// unordered_map gives generally better time complexity cause


int main(){
    //hashing();
    //hashing2();
}
