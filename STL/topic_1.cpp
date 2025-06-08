#include <iostream>
using namespace std;

int main()
{
    int i;
    int ax[5] = {10, 20, 60, 40, 30};
    cout << "enter index:";
    cin >> i;
    try{
        if(i > 4 || i < 0) throw "Index out of bound";
        cout << "ax[" << i << "]=" << ax[i] << endl;
    }
    catch(int x){
        cout << x;
    }
    catch(const char *e){
        cout << e;
    }
    catch(...){
        cout << "Default catch block";
    }
}