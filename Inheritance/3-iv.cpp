#include <iostream>

using namespace std;

class A {
    private: int ax;
    public:

        A() {
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
    public:

        B() {
            bx = 11;
            cout << "Constructor for B is called\n";
        }
    int getBX() {
        return bx;
    }
    ~B() {
        cout << "Destructor for B is called\n";
    }
};
class C: public A {
    private: int cx;
    public:

        C() {
            cx = 12;
            cout << "Constructor for C is called\n";
        }
    void Sum(int bx) {
        int sum = getAX() + bx + cx;
        cout << "Sum = " << sum << endl;
    }
    ~C() {
        cout << "Destructor for C is called\n";
    }
};
int main() {
    B b;
    C c;
    int bx = b.getBX();
    c.Sum(bx);
    return 0;
}