#include <bits/stdc++.h>
using namespace std;

queue<int> ax;

int main(){
    ax.push(10);
    ax.push(20);
    ax.push(30);
    ax.pop();

    cout << "Front element: " << ax.front() << endl;
    cout << "Back element: " << ax.back() << endl;

    if(ax.empty()) cout << "Empty Queue";
    else cout << "Not Empty Queue";
}