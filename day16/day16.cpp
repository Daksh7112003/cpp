#include <iostream>

using namespace std ;



//function overloading .....



//Example 1 .....


// int sum(int a , int b , int c){
//     return a+b+c;

// }

// int sum(int a , int b){
//     return a*b;

// }

// int main(){


//     cout<<"the value of a , b , c "<<sum(2,5,6);
//       cout<<"the value of a , b "<<sum(2,5);





    


//     return 0;


// }




// Example 2....



// volume of the cube ...

int volume(int a ){

return a*a*a;


    }


    int volume(int r , int h){
        return (3.14*r*r*h);

    }

    int main(){

        // this is function overloading ....

        cout<<"The volume of cylinder is "<<volume(2,7)<<endl;

        cout<<"The volume of cube is "<<volume(4)<<endl;







        return 0 ;

    }





