#include <iostream>
using namespace std;

int main() {
    int n, d, r;
    cout << "Enter n & d: ";
    cin >> n >> d;

    try {
        if (d == 0) {
            throw "This is a divide-by-zero error"; // Throwing a string as an exception
        }
        r = n / d; // Perform division only if no error
        cout << endl << "Division = " << r << endl;
    } 
    catch (const char* ex) { // Catching the exception
        cout << ex << endl;
    }

    return 0;
}
