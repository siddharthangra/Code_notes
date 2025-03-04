#include <bits/stdc++.h>
using namespace std;

int main(){
    int num = 5;
    cout << "The number is: " << num << endl;
    cout << "The num address is: "<< &num << endl; 
    int *ptr = &num;
    cout << "value of ptr: " << ptr << endl;
    cout << "Address of box ptr: "<< &ptr << endl;
    cout << "Value of num: " << *ptr << endl;

    /*
    So basically, &num points to the address of variable num while *ptr points to the address inside the variable ptr
    that's why if you will do *num u will get an error cause there is no address inside num
    &ptr will again point to the address of variable box of ptr
    */

   //copying a pointer
   int *duplicate = ptr;
   cout << ptr << "-" << duplicate << endl;
   cout << *ptr << "-" << *duplicate << endl;

   // Pointers in arrays
   int arr[10];
   cout << "Address of first memory box is : " << arr << endl;
   cout << "Address of first memory box is : " << &arr[0] << endl;
   //upon observing the array u will see that arr[i] is basically *(arr + i)
   // This can also be written as i[arr] = *( i + arr)

   int arr2[4] = {3,45,34,2424};
   cout << arr2[3] << "-" << *(arr2+3) << endl;
   cout << 2[arr2]  << "-" << *(2 + arr2) << endl;


   char ch[6] = "abcde";
   cout << ch << endl;
   // i.e char function is diff i.e ch is not an address like in integer array
   char *c = &ch[0];
   cout << *c << endl;
   cout << *(c+1) << endl;
   cout << c << endl;
   // i.e again upon c it prints everything togetehr

   // FUNCTIONS
   

}