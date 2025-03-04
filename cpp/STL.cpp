#include<bits/stdc++.h>
using namespace std;

//UNORDERED_SET
int notes_US(){
      unordered_set < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the unordered set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in unordered set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the unordered set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The unordered set is not empty " << endl;
  else
    cout << "The unordered set is empty" << endl;
  s.clear();
  cout << "Size of the unordered set after clearing all the elements: " << s.size();
}

//VECTOR
int notes_vector(){
     vector < int > v;

  for (int i = 0; i < 10; i++) {
    v.push_back(i); //inserting elements in the vector
  }

  cout << "the elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";

  cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();
  cout << "\nThe size of the vector: " << v.size();
  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  v.pop_back();

  cout << "\nPrinting the vector after removing the last element:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << "\nInserting 5 at the beginning:" << endl;
  v.insert(v.begin(), 5);
  cout << "The first element is: " << v[0] << endl;
  cout << "Erasing the first element" << endl;
  v.erase(v.begin());
  cout << "Now the first element is: " << v[0] << endl;

  if (v.empty())
    cout << "\nvector is empty";
  else
    cout << "\nvector is not empty" << endl;

  v.clear();
  cout << "Size of the vector after clearing the vector: " << v.size();

}

//SET
int notes_set(){
    set < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The set is not empty " << endl;
  else
    cout << "The set is empty" << endl;
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size();
}

//PAIR
int notes_pairs(){
  pair<int, int> p = {1,3}; 
  cout << p.first << " " << p.second;
  pair<int, pair<int, int>> p2 = {1,{3,4}};
  cout << p.first << " " << p.second.second << " " << p.second.pfirst;
  
  // making array of a pair
  pair<int, int> arr[] = {{1,2},{2,5}, {5,6}};
  cout << arr[1].first ;
}
    

//LIST
int notes_list(){
  list<int> ls;
  ls.push_back(2); //{2}
  ls.emplace_back(4); //{2,4}
  ls.push_front(5); //{5,2,4}
  ls.emplace_front();  

  // all other functions just same to vector
}


//STACK
// follows LIFO i.e. last in first out 
int notes_stack(){
  stack<int> st;
  st.push(1); // {1}
  st.push(2); // {2,1}
  st.push(3); //{3,2,1}
  st.emplace(4); // {4,3,2,1}

  cout << st.top(); // prints 4 i.e last value, we can't print ast st[] here

  st.pop(); //{3,2,1}
  cout << st.size();
  cout << st.empty(); //tells if the stack is empty or not

  stack<int> st1, st2;
  st1.swap(st2);
  
    
}

//QUEUE
// follows FIFO i.e first in first out
void notes_queue(){
  queue<int>q;
  q.push(1); //{1}
  q.push(2); //{1,2}
  q.emplace(4); //{1,2,4}

  q.back() +=5; //adds 5 in the last element i.e {1,2,9}
  cout << q.back(); //prints 9

  cout << q.front(); //prints 1
  q.pop(); // {2,9}

  // size swap empty same as stack
}

//Priority_QUEUE
void explainPQ(){
  priority_queue<int>pq;
  pq.push(5); //{5}
  pq.push(2); //{5,2}
  pq.push(8); //{8,5,2} i.e sorts in an order

  cout << pq.top(); //prints 8
  pq.pop(); //{5,2}
  // size swap empty function same as others
}

//SET
// prepare an ordered list on unique elements
void explainSet(){
  set<int>S;
  S.insert(1); //{1}
  S.emplace(2); //{1,2}
  S.insert(2); //{1,2} 
  S.insert(4); //{1,2,4}
  S.insert(3); //{1,2,3,4}

  // begin(), end(), empty(), swap() and size()are same as others

  //{1,2,3,4,5}
  auto it = S.find(3); //it is now the location of 3 in S
  S.erase(5); 

  int cnt = S.count(1);

  S.erase(it); // takes constant time to erase 
  S.erase(5); // takes lograithmic time

  auto it1 = S.find(2);
  S.erase(it, it1);

}


// MAP
// map joins keys to their unique values

void explain_MAp(){
  map<int /*Key*/, int/*value*/> mpp; 
  map<int, pair<int, int>>mpp2;
  map<pair<int, int>, int>mpp3;

  // i.e keys and values can be od any data type

  mpp[1] = 2; // value of key 1 is 2
  mpp.emplace({3,1});
  mpp.insert({3,4});

  for(auto it:mpp) {
    cout << it.first << " " << it.second << endl;
  }


}