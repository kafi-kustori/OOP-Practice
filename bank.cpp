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
        static void MaximumAmount(){
            int max_amount = 0;
            int max_id = -1;
            for(int i=0; i<n; i++){
                if(clients[i]->amount > max_amount) {
                    max_amount = clients[i]->amount;
                    max_id = clients[i]->id;
                }
            }
            cout << "Maximum amount: " << max_amount << endl;
            cout << "ID: " << max_id << endl;
        }
        static void MinimumAmount(){
            int min_id = -1;
            int min_amount = INT32_MAX;
            for(int i=0; i<n; i++){
                if(clients[i]->amount < min_amount) {
                    min_amount = clients[i]->amount;
                    min_id = clients[i]->id;
                }
            }
            cout << "Minimum amount: " << min_amount << endl;
            cout << "ID: " << min_id << endl;
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

    Bank::MaximumAmount();
    Bank::ShowTotalAmount();
    Bank::MinimumAmount();
    Bank::MaximumAmount();
}
