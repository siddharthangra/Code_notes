// recursion is calling a function repeatedly until a condition is satisfied
#include<bits/stdc++.h>
using namespace std;

void print_n_to_1(int n){
    if(n>0){ //base condition
    cout << n << " ";
    print_n_to_1(n-1); //recursive function 
    }
}

void print_1_to_n(int i, int n){
   if(i>n) return; //base condition
   cout<<i<<endl;
   print_1_to_n(i+1,n);

}

//Finding sum of the first N numbers
// method 1 - parameterised way
void sum(int i, int n){
    if(i == 0){
        cout << n;
    }
    else{sum(i-1,n+i);}
}

// method-2 - dynamic programming
int sum2(int n){
    if(n == 0){ //base case
        return 0;
    }
    else{
        return n + sum2(n - 1);
    }
}


//Factorial of n
int factorial(int n){
    if(n == 0){
        return 1;
    }
    else return n*factorial(n-1);
}


//Reversing a given array
int reverse(int arr[], int i, int n){
    if(i >= n/2){
        return 0;
    }
    else{
        swap(arr[i], arr[n-i-1]);
        reverse(arr,i+1,n);
    }
}


//checking if the string is a plaidrome
bool palindrome(int i, string s){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;

    return palindrome(i+1,s);
}

//printing fibonacci series upto Nth term
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    else{
        int last = fibonacci(n-1);
        int secondlast = fibonacci(n-2);

        return last + secondlast;
    }
}
//caution this code gives me the Nth term of the fibonacci sereis


int main(){
    //print_n_to_1(6);
    //print_1_to_n(1,6);
    //sum(7,0);
    //cout << sum2(9);
    //cout << factorial(5);
    /*
    int n = 5;
    int arr[5] = {2,35,1,5,3};
    reverse(arr, 0, 5);
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    */
   /*
   string s = "madam" ;
   cout << palindrome(0,s);
    */

   /*
   int i = 0;
   int n = 5;
   while(i<=n){
    cout << " " << fibonacci(i);
    i ++;
   }
   */
}
