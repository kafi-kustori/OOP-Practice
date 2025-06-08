#include <bits/stdc++.h>
using namespace std;

vector<int> ax;

int show_menu(){
    system("powershell -command Clear-Host");
    int option;
    cout << "--- Menu --- " << endl;
    cout << "  1.Insert" << endl;
    cout << "  2.Delete" << endl;
    cout << "  3.Search" << endl;
    cout << "  4.Display List" << endl;
    cout << "  5.Exit" << endl;
    cout << "    Enter your option: ";
    cin >> option;
    return option;
}

int show_insert_sub_menu(){   
    system("powershell -command Clear-Host"); 
    int option;
    cout << "--- Insert Sub Menu --- " << endl;
    cout << "  1.Insert at First" << endl;
    cout << "  2.Insert at Last" << endl;
    cout << "  3.Insert Before" << endl;
    cout << "  4.Insert after" << endl;
    cout << "  5.Exit" << endl;
    cout << "    Enter your option: ";
    cin >> option;
    return option;
}

void display_all(){
    cout << "--- All elements --- " << endl;
    for(auto i : ax){
        cout << "[" << i << "]" << endl;
    }
    getchar();getchar();
}

int get_input(){
    cout << "Enter int value: ";
    int x;
    cin >> x;
    return x;
}

void try_insert_ba(int modifier){
    int x, y;
    cout << "Enter search value: ";
    cin >> x;
    vector<int>::iterator i = ax.begin();
    bool search_done = false;
    for(;i<ax.end(); i++){
        if(*i==x){
            search_done = true;
            break;
        }
    }
    if(search_done){
        y = get_input();
        ax.insert(i+modifier, y);
    }else{
        cout << "The number was not found..." << endl;
        getchar();getchar();
    }
}

void search_ele(){
    cout << "Enter element to search: ";
    int x; cin >> x;
    for(auto i : ax){
        if(x==i){
            cout << "Found" << endl;
            getchar();getchar();
            return;
        }
    }
    cout << "Not found" << endl;
    getchar();getchar();
}

void delete_ele(){
    cout << "Enter element to delete: ";
    int x; cin >> x;
    vector<int>::iterator i = ax.begin();
    for(; i<ax.end(); i++){
        if(x==*i){
            ax.erase(i);
            cout << "Delete successful" << endl;
            getchar();getchar();
            return;
        }
    }
    cout << "Not found" << endl;
    getchar();getchar();
}

int main(){    
    while (1)
    {
        int option = show_menu();
        if(option==5) return 0;

        switch (option)
        {
            case 1 : {
                int option_sub = show_insert_sub_menu();
                switch (option_sub)
                {
                    case 1 : {
                        ax.insert(ax.begin(), get_input());
                        break;
                    };
                    case 2 : {
                        ax.insert(ax.end(), get_input());
                        break;
                    };
                    case 3 : {
                        try_insert_ba(0);
                        break;
                    };
                    case 4 : {
                        try_insert_ba(1);
                        break;
                    };
                }
                break;
            };
            case 2 : {
                delete_ele();
                break;
            }
            case 3 : {
                search_ele();
                break;
            }
            case 4 : {
                display_all();
                break;
            }
        }

    }
    

    return 0;
}