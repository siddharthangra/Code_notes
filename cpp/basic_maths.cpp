#include<bits/stdc++.h>
using namespace std;

//PRinting divisors

//Method 1
void divisors_1(int n){
    for(int i = 1; i<=n; i++){
        if(n%i == 0){
            cout << i << " ";
        }
    }
}

// there is a better appraoch to above problem
// if u observe if i is divisor of n then, n/i wil be the divior of it as well
// for e.g in 36 --> 1*36.2*18,3*2,4*9,6*6,9*4 and so onn
// i.e I dont't have to check the loop over square root of n


//METHOD 2
void divisors_2(int n){
    vector<int>ls;
    for(int i =1; i*i <=n;i++){
        if(n%i == 0){
            ls.push_back(i);
            int i2 = n/i;
            if( i2 != i ){
                ls.push_back(i2);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls ){
        cout << it << " ";
    }
}
// but above one wont give me number in a sorted manner and I may have to use vector for it



//Greatest common divisors
//MEthod -1
void gcd(int n1, int n2){
    for(int i=min(n1,n2); i>=1; i--){
        if(n1%i == 0 && n2%i ==0){
            int gcd = i;
            cout << gcd;
            break;
        }
    }
}
// time complexity = min(n1,n2)


//Method-2
/* 
Euclidian Algorithm!!
gcd(n1,n2) = gcd(n1-n2,n2) for n1>n2
i.e this formula can be iterated over and over until we reach a base case

EXAMPLE
gcd(20,45) = gcd(25,20) = gcd(5,20) = gcd(5,15) = gcd(5,10) = gcd(5,5) = gcd(0,5)
ans is 5
but well, if u notice gcd(5,20) was basically gcd(45%20,20)
i.e now you can use

gcd(n1,n2) = gcd(n2%n1,n1) where n1>n2
*/
void gcd2(int n1, int n2){
    while(n1 > 0 && n2 > 0){
        if(n1>n2){
            n1 = n1%n2;
        }
        else n2 = n2%n1;
    }
    if(n1 == 0) cout << n2;
    else cout << n1;
}
// time complexity = log(min(n1,n2))


int main(){
    //divisors_1(56);
    //divisors_2(56);
    //gcd(9,12);
    gcd(45,20);

}