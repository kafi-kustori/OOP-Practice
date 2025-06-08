#include <iostream>
using namespace std;

class circuit {

private:
    int real;
    int img;

public:
    // Constructor
    circuit(int r = 0, int i = 0) : real(r), img(i) {}

    // Addition
    circuit operator + (const circuit &obj) const {
        return circuit(real + obj.real, img + obj.img);
    }

    // Subtraction
    circuit operator - (const circuit &obj) const {
        return circuit(real - obj.real, img - obj.img);
    }

    // Multiplication
    circuit operator * (const circuit &obj) const {
        return circuit(real * obj.real - img * obj.img, real * obj.img + img * obj.real);
    }

    // Division
    circuit operator / (const circuit &obj) const {
        int denominator = obj.real * obj.real + obj.img * obj.img;
        return circuit((real * obj.real + img * obj.img) / denominator,
                       (img * obj.real - real * obj.img) / denominator);
    }

    // Inverse (Reciprocal)
    circuit inverse() const {
        int denominator = real * real + img * img;
        return circuit(real / denominator, -img / denominator);
    }

    void print() const {
        cout << real << " + i" << img << endl;
    }
};

int main() {

    // Impedances
    circuit z1(3, 4);   // 3 + 4i
    circuit z2(4, -3);  // 4 - 3i
    circuit z3(0, 6);   // 6i

    // Voltage
    circuit voltage(100, 50);

    // Compute the reciprocal of each impedance
    circuit invZ1 = z1.inverse();
    circuit invZ2 = z2.inverse();
    circuit invZ3 = z3.inverse();

    // Sum of the reciprocals
    circuit invZ_total = invZ1 + invZ2 + invZ3;

    // Total impedance
    circuit Z_total = invZ_total.inverse();

    // Calculate current
    circuit current = voltage / Z_total;

    // Print results
    cout << "Total impedance: ";
    Z_total.print();

    cout << "Current: ";
    current.print();

    return 0;
}
