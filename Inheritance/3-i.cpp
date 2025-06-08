#include <iostream>

using namespace std;

class A {
    private: int ax;
    public: A() {
        ax = 10;
        cout << "Constructor for A is called\n";
    }
    int getAX() {
        return ax;
    }
    ~A() {
        cout << "Destructor for A is called\n";
    }
};
class B: public A {
    private: int bx;
    public: B() {
        bx = 5;
        cout << "Constructor for B is called\n";
    }
    void Sum() {
        int sum = getAX() + bx;
        cout << "Sum = " << sum << endl;
    }
    ~B() {
        cout << "Destructor for B is called\n";
    }
};
int main() {
    B b;
    b.Sum();
    return 0;
}