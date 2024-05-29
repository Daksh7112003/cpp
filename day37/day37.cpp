#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){


    list<int>l;

    l.push_back(20);  // this value will go to the back ....

    l.push_back(30);

    l.push_back(67);

    l.push_back(78); //  this value will go to the back ....


    l.push_front(15);  //  this value will go to the front ...





    cout<<l.front()<<" "<<l.back()<<endl;


    //this will print the front and back value of the list ....


 cout<<l.size()<<endl; //  this will print the size of the list ......
 




}