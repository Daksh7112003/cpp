
//Virtual base class ......


#include<iostream>
using namespace std;


class student{

    protected:
    int roll_no;


    public:

    void set_rollnumber(int a){
        roll_no =a;



    }


    void print_number(){

        cout<<"Your roll no is"<<roll_no<<endl;

    }




};



class Test: virtual public student{


    protected:


    float maths , physics ;

    public:

    void set_marks(float m1 , float m2){
        maths= m1 ;
        physics= m2;

    }


     void print_marks(void){
                cout << "Your result is here: "<<endl
                     << "Maths: "<< maths<<endl
                     << "Physics: "<< physics<<endl;
            }



    
};

class sports: virtual public student{


    protected:
    float score ;

    public:

    void set_score(float sc ){
        score =sc ;

    }

    void print_score(){
        cout<<"Your pt score is "<<score<<endl;

    }




};


class result : public Test, public sports{
protected:

float total;


public:

void display(){

    total = maths +physics +score ;

    cout<<"your total score is "<<total<<endl;




}
    
};



int main(){


    result daksh;

    daksh.set_marks(90,89);



    daksh.print_marks();

    daksh.set_score(93);

    daksh.print_score();

    daksh.display();


    



    return 0 ;

}






