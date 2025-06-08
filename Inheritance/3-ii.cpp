#include <iostream>
#include <stdexcept> // For std::runtime_error
using namespace std;

int main() {
    try {
        // Uncomment one of the throws below to test each catch block
        // throw "String Error";       // Matches catch(const char*)
        // throw 20;                   // Matches catch(int)
        throw runtime_error("Runtime error"); // Matches catch(runtime_error)
    }
    catch (const char* ex) {
        // Handles string exceptions
        cout << "Caught string exception: " << ex << endl;
    }
    catch (int ex) {
        // Handles integer exceptions
        cout << "Caught integer exception: " << ex << endl;
    }
    catch (runtime_error& e) {
        // Handles runtime_error exceptions
        cout << "Caught runtime_error: " << e.what() << endl;
    }
    catch (...) {
        // Catches all other exceptions
        cout << "Caught an unknown exception!" << endl;
    }

    return 0;
}
