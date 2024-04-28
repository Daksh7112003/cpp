#include <iostream>

using namespace std;

//pointer to pointer ...

int main(){


    int a = 4;


    int*b = &a;





    // this is the pointer of the pointer B....
    

    int**c=&b;


    cout<<"the address of the pointer b is "<<c<<endl;









    return 0;

}