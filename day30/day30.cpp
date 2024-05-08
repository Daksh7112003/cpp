// practise ques 1 on inheritance ...



#include <iostream>

using namespace std;



class mammals{

    public:

    void mammalsfxns(void);

};

void mammals::mammalsfxns(){

    cout<<"this class belongs to mammals"<<endl;

}

class marine_animals{
public:

void marine_animalsfxn(){


    cout<<"this class belongs to marine animals "<<endl;

}

};



class bluewhale : public mammals , public marine_animals{

    public:

    void bluewhalefxn();

};


void bluewhale::bluewhalefxn(){


    cout<<"this class belongs to bluewhale ...."<<endl;


}


int main(){


mammals dog;
marine_animals octopus;
bluewhale whale;


whale.marine_animalsfxn();
whale.mammalsfxns();
whale.bluewhalefxn();


    return 0 ;

}



