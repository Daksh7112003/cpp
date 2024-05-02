#include<iostream>
using namespace std;

class shop{
int item_ID [100];

int item_Price[100];
int counter;


public:

void init_counter(){
    counter=0;


}
void set_price(void);
void display_price(void);

};



void shop:: set_price(){


    cout<<"Enter the id of the item"<<counter +1<<endl;


    cin>>item_ID[counter];

    cout<<"Enter the price of the item"<<counter +1<<endl;

    cin>>item_Price[counter];

    counter++;



}

void shop:: display_price(void){

    for(int i=0 ; i<counter;i++){
        cout<<"The price of item_id is "<<item_ID[i]<<" is "<<item_Price[i]<<endl;
    
    }
}



int main(){

    shop yolo; 


   yolo.init_counter();
   yolo.set_price();
   yolo.set_price();
   yolo.display_price();




    return 0;

}

