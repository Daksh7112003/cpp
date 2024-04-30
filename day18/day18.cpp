#include <iostream>
#include <string>
using namespace std;

class binary {
    string s;

public:
    void read(void);
    bool checkbinary(void);
};

void binary::read(void) {
    cout << "Enter the binary number: ";
    cin >> s;
}

bool binary::checkbinary(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "The number is not binary." << endl;
            return false; // Return false if the number is not binary
        }
    }
    return true; // Return true if the number is binary
}

int main() {
    binary b;
    b.read();
    if (b.checkbinary()) {
        cout << "The number is binary." << endl;
    }
    return 0; 
}
