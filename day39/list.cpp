#include<iostream>

#include<bits/stdc++.h>
using namespace std ;


int main(){


    list<int>l1;
    l1.push_back(30);
    l1.push_back(67);

    l1.push_back(787);

    l1.push_back(78);


    for(auto it = l1.begin(); it!=l1.end();it++){

        cout<<*it ;
        cout<<" ";


    }

    cout<<endl;






    // for reversing the list in stl..........


    for(auto it = l1.rbegin() ; it!=l1.rend(); it++){

        cout<<*it;   //  thats 
        cout<<" ";

    }

    

}
