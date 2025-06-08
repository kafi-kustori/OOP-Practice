#include <bits/stdc++.h>
using namespace std;

list<int> ax;

void Display(){
    cout << "All Elements in forward direction:" << endl;
    list<int>::iterator i = ax.begin();
    while (i != ax.end())
    {
        cout << *i << " ";
        i++;
    }
    cout << endl;
}
void DisplayRev(){
    cout << "All Elements in reverse direction:" << endl;
    list<int>::reverse_iterator i = ax.rbegin();
    while (i != ax.rend())
    {
        cout << *i << " ";
        i++;
    }
    cout << endl;
}

void InsertBefore(int search_element, int data){
    list<int>::iterator i = ax.begin();
    while (i != ax.end())
    {
        if(*i==search_element){
            ax.insert(i, data);
            break;
        }
        i++;
    }
}
void InsertAfter(int search_element, int data){
    list<int>::iterator i = ax.begin();
    while (i != ax.end())
    {
        if(*i==search_element){
            ax.insert(++i, data);
            break;
        }
        i++;
    }
}

list<int>::iterator FindElement(int search){
    list<int>::iterator i = ax.begin();
    while (i != ax.end())
    {
        if(*i==search) break;
        i++;
    }
    return i;
}

void CountElement(int search){
    int count = 0;
    for(auto i : ax) if(i==search) count++;
    cout << "Element: " << search << " appeared " << count << " times" << endl;
}

void DeleteElement(int search){
    auto i = FindElement(search);
    ax.erase(i);
}
void DeleteParticular(int search){
    ax.remove(search);
}

void DeleteFirst(){
    ax.erase(ax.begin());
}

bool RemoveCondition(int i){
    return i == 30;
}
bool UniqueRemoveCondition(int a, int b){
    return a==b;
}

int main(){
    ax.push_back(10);
    ax.push_back(20);
    ax.push_back(30);
    ax.push_back(40);
    ax.push_back(4);
    ax.push_back(1);
    ax.push_back(3);
    ax.push_back(2);
    ax.push_back(1);
    ax.push_back(1);
    ax.push_back(44);
    ax.push_back(35);

    ax.push_front(100);
    ax.push_front(200);

    Display();
    DisplayRev();

    cout << "Front element: " << ax.front() << endl;
    cout << "Back element: " << ax.back() << endl;;

    ax.pop_back();
    ax.pop_back();
    ax.pop_front();

    Display();

    auto r = find(ax.begin(), ax.end(), 20);

    InsertBefore(10, 5);
    InsertAfter(10, 10);

    CountElement(10);

    DeleteElement(5);

    Display();

    DeleteFirst();
    DeleteFirst();
    DeleteFirst();
    DeleteFirst();

    DeleteParticular(40);
    
    ax.remove_if(RemoveCondition);

    list<int> new_list;
    new_list.assign(ax.begin(), ax.end());

    cout << "New List:" << endl;
    for(auto i : ax) cout << i << " ";
    cout << endl;

    ax.sort();

    cout << "After sorting:" << endl;
    Display();

    ax.unique(UniqueRemoveCondition);
    Display();

    return 0;
}