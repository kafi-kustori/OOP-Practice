#include <bits/stdc++.h>
using namespace std;

stack<int> ax;

int main(){
    ax.push(10);
    ax.push(20);
    ax.pop();

    cout << "Top element: " << ax.top() << endl;

    if(ax.empty()) cout << "Empty Stack";
    else cout << "Not Empty Stack";
}