#include <iostream>
using namespace std;

class Bank{
    private:
        int id;
        float amount;
        static int n;
        static Bank *clients[];
    public:
        Bank(){
            id = 0;
            amount = 0;
            clients[n] = this;
            n++;
        }
        Bank(int i, float a){
            id = i;
            amount = a;
            clients[n] = this;
            n++;
        }
        Bank(Bank &b){
            id = b.id;
            amount = b.amount;
            clients[n] = this;
            n++;
        }

        void SetData(int i, float a){
            id = i;
            amount = a;
        }
        void ChangeAmount(float a){
            amount += a;
        }
        void DisplayN(){
            cout << "Total clients : " << n << endl;
        }
        void DisplayAll() const{
            cout << "id : " << id << endl;
            cout << "amount : " << amount << endl;
            cout << "n : " << n << endl;
        }
        static void ShowTotalAmount(){
            int sum = 0;
            for(int i=0; i<n; i++) sum += clients[i]->amount;
            cout << "Total amount: " << sum << endl;
        }
};

int Bank::n = 0;
Bank *Bank::clients[1000];

int main(){
    Bank client_1;
    client_1.SetData(5, 50);
    Bank client_2(10, 200);
    Bank client_3(20, 150);
    Bank client_4(client_3);
    Bank client_5(client_2);

    Bank::ShowTotalAmount();
}