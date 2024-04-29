#include <iostream>
using namespace std;

// Function prototype
void swap(int *x, int *y);

int main() {
    int a = 10, b = 20;

    swap(&a, &b); // Pass the addresses of a and b

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

// Function definition: Swaps the values pointed to by x and y
void swap(int *x, int *y) {
    int temp = *x; // Dereference x to access its value
    *x = *y;       // Dereference y to access its value and assign it to x
    *y = temp;     // Assign the value of temp to y (dereferenced)
}
