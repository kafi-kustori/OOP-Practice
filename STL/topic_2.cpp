#include <iostream>
using namespace std;

template<typename T1, typename T2>
class A
{
private:
    T1 x;
    T2 y;

public:
    void setData(T1 x, T2 y)
    {
        this->x = x;
        this->y = y;
    }
    
    T1 Sum()
    {
        T1 s;
        s = x + y;
        return s;
    }
};

int main()
{
    A<int, int> int_int = A<int, int>();
    A<int, double> int_double = A<int, double>();
    A<double, int> double_int = A<double, int>();
    A<double, double> double_double = A<double, double>();

    int_int.setData(10, 20);
    cout << int_int.Sum() << endl;;

    int_double.setData(10, 20.5);
    cout << int_double.Sum() << endl;;

    double_int.setData(30.25, 10);
    cout << double_int.Sum() << endl;;

    double_double.setData(30.25, 15.3);
    cout << double_double.Sum() << endl;;

    return 0;
}