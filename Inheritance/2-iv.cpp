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

class B: public A {
    public: int showData() {
        cout << "x=" << getX() << endl;
        cout << "y=" << getY() << endl;
        cout << "z=" << getZ() << endl;
    }
};

class C: public A {
    public: int showData() {
        cout << "x=" << getX() << endl;
        cout << "y=" << getY() << endl;
        cout << "z=" << getZ() << endl;
    }
};

int main() {
    B b;
    C c;

    b.showData();
    c.showData();
    return 0;
}