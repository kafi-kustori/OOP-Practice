#include <iostream>

using namespace std;

class A {
    private: int x;
    protected: int y;
    public: int z;

    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    int getZ() {
        return z;
    }
};

class B {
    private: int p;
    protected: int q;
    public: int r;

    int getP() {
        return p;
    }
    int getQ() {
        return q;
    }
    int getR() {
        return r;
    }
};

class C: public A, public B {
    public: void showData() {
        cout << "x=" << getX() << endl;
        cout << "y=" << getY() << endl;
        cout << "z=" << getZ() << endl;
        cout << "p=" << getP() << endl;
        cout << "q=" << getQ() << endl;
        cout << "r=" << getR() << endl;
    }
};

int main() {
    C c;
    c.showData();
    return 0;
}