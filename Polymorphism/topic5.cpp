#include<iostream>
using namespace std;

class A {
private:
    int x;

public:
    // Friend function prototypes
    friend void Add(A &obj, int value);
    friend void IncX(A &obj, int m);
    friend void DecX(A &obj, int n);

    // A function to display the value of x
    void display() const {
        cout << "x = " << x << endl;
    }
};

// Body of friend functions

// Add(): Assign value to the data member x
void Add(A &obj, int value) {
    obj.x = value;
}

// IncX(): Increase the value of x by m
void IncX(A &obj, int m) {
    obj.x += m;
}

// DecX(): Decrease the value of x by n
void DecX(A &obj, int n) {
    obj.x -= n;
}

int main() {
    A obj;

    // Calling the Add function to set x to 10
    Add(obj, 10);
    obj.display(); // Output: x = 10

    // Calling the IncX function to increase x by 5
    IncX(obj, 5);
    obj.display(); // Output: x = 15

    // Calling the DecX function to decrease x by 3
    DecX(obj, 3);
    obj.display(); // Output: x = 12

    return 0;
}
