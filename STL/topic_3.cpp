#include <bits/stdc++.h>
using namespace std;


int main(){
    array<int, 6> ax = {10,60,30,70,20};
    cout << ax.at(2) << endl;
    cout << ax.front() << endl;
    cout << ax.back() << endl;
    ax.fill(50);
    if(ax.empty()) cout << "Empty array" << endl;
    else cout << "Not empty" << endl;

    cout << ax.size() << endl;
    cout << ax.max_size() << endl;
    
    cout << ax.begin() << endl;
    cout << ax.end() << endl;
    
    return 0;
}