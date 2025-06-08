#include <bits/stdc++.h>
using namespace std;


int main(){
    pair<int, string> px;
    px = make_pair(10, "Rajshahi");
    cout << px.first << endl;
    cout << px.second << endl;

    get<0>(px) = 20;
    cout << px.first << endl;

    pair<int, string> bx = make_pair(30, "Dhaka");
    px.swap(bx);

    cout << "After swap" << endl;
    cout << "px: " << px.first << " , " << px.second << endl;
    cout << "bx: " << bx.first << " , " << bx.second << endl;
    
    return 0;
}