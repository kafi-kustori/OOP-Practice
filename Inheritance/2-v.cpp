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

class B: public virtual A {

};

class C: public virtual A {

};
class D: public
B, public C {
    public: int showData() {
        cout << "x=" << getX() << endl;
        cout << "y=" << getY() << endl;
        cout << "z=" << getZ() << endl;
    }
};

int main() {
    D d;
    d.showData();
    return 0;
}