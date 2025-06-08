#include <iostream>

using namespace std;

class A {
    private: int ax;
    public:

        A() {
            ax = 50;
            cout << "Constructor for A is called\n";
        }
    int getAX() {
        return ax;
    }
    ~A() {
        cout << "Destructor for A is called\n";
    }
};
class B: public virtual A {
    private: int bx;
    public:

        B() {
            bx = 60;
            cout << "Constructor for B is called\n";
        }
    int getBX() {
        return bx;
    }
    ~B() {
        cout << "Destructor for B is called\n";
    }
};
class C: public virtual A {
    private: int cx;
    public:

        C() {
            cx = 70;
            cout << "Constructor for C is called\n";
        }
    int getCX() {
        return cx;
    }
    ~C() {
        cout << "Destructor for C is called\n";
    }
};
class D: public B, public C {
    private: int dx;
    public:

        D() {
            dx = 80;
            cout << "Constructor for D is called\n";
        }
    void Sum() {
        int sum = getAX() + getBX() + getCX();
        cout << "Sum = " << sum << endl;
    }
    ~D() {
        cout << "Destructor for D is called\n";
    }
};
int main() {
    D d;
    d.Sum();
    return 0;
}