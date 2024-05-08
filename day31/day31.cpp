
// Both the code are correct.....



// #include <iostream>
// using namespace std ;

// class fruit{

//     protected:
//     int total_fruits;

//  void addfruit(int fruits){
//     total_fruits=fruits;
//     }

//     int get_totalsfruits() const{
//         return total_fruits;

//     }

// };

//  class apples: public fruit{

//     int total_apples;

//     public:
    

//     void addapples(int apples){


//         total_apples = apples;

//     }
//     int get_totalapples() const{

       


//         // cout<<total_apples<<endl;

//         return total_apples;



//     }

//     };



// class mangoes: public fruit{

//     int total_mangoes;

//     public:
    

//     void addmangoes(int mangoes){


//         total_mangoes = mangoes;

     


//     }
    
//     int get_totalmangoes() const{

        

//         // cout<<total_mangoes<<endl;

//         return total_mangoes;



//     }

//     };



//     int main(){


//         apples Apples;
//         mangoes Mangoes;

//         Apples.addapples(6);

//         Mangoes.addmangoes(8);


//         Apples.get_totalapples();

//         Mangoes.get_totalmangoes();


//         cout<<Apples.get_totalapples()+Mangoes.get_totalmangoes()<<endl;


//         return 0 ; 

//     }



    



#include <iostream>
using namespace std;

class fruit {
protected:
    int total_fruits;

public:
    fruit() : total_fruits(0) {}

    void addFruit(int fruits) {
        total_fruits += fruits;
    }

    int getTotalFruits() const {
        return total_fruits;
    }
};

class apples : public fruit {
private:
    int total_apples;

public:
    apples() : total_apples(0) {}

    void addApples(int apples) {
        total_apples += apples;
        addFruit(apples);
    }

    int getTotalApples() const {
        return total_apples;
    }
};

class mangoes : public fruit {
private:
    int total_mangoes;

public:
    mangoes() : total_mangoes(0) {}

    void addMangoes(int mangoes) {
        total_mangoes += mangoes;
        addFruit(mangoes);
    }

    int getTotalMangoes() const {
        return total_mangoes;
    }
};

int main() {
    apples Apples;
    mangoes Mangoes;

    Apples.addApples(6);
    Mangoes.addMangoes(8);

    int totalFruits = Apples.getTotalFruits() + Mangoes.getTotalFruits();

    cout << "Total Apples: " << Apples.getTotalApples() << endl;
    cout << "Total Mangoes: " << Mangoes.getTotalMangoes() << endl;
    cout << "Total Fruits: " << totalFruits << endl;

    return 0;
}
