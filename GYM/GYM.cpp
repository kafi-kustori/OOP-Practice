#include <iostream>
using namespace std;

class Member{
    int $mem_id[1000];
    float $mem_height[1000];
    float $mem_weight[1000];
    bool $mem_exist[1000];
    char $mem_name[1000][30];
    float $mem_bmi[1000];

    int $total_mem = 0;

    int GetInputINT(char *txt){
        cout << txt;
        int x;
        cin >> x;
        return x;
    }
    float GetInputFLOAT(char *txt){
        cout << txt;
        float x;
        cin >> x;
        return x;
    }
    int CheckID(int _id){
        for(int i=0; i<$total_mem; i++){
            if($mem_id[i] == _id) return i;
        }
        return -1;
    }
    float GetBMI(int indx){
        return $mem_weight[indx] / ($mem_height[indx] * $mem_height[indx]);
    }

    public: 
    void $Add(){
        cout << "--- Add Member ---" << endl << endl;
        int inputID = GetInputINT(" Enter id: ");
        int IDx = CheckID(inputID);
        if(IDx != -1){
            cout << " Member ID already exists" << endl;;
            return;
        }

        $mem_id[$total_mem] = inputID;
        cout << " Enter name: ";
        cin >> $mem_name[$total_mem];
        $mem_exist[$total_mem] = true;
        $mem_height[$total_mem] = GetInputFLOAT(" Enter height (m) : ");
        $mem_weight[$total_mem] = GetInputFLOAT(" Enter weight (kg) : ");
        $mem_bmi[$total_mem] = GetBMI($total_mem);
        $total_mem++;

        cout << " Member was added successfully !" << endl << endl;
    }

    void $Update(){
        cout << "--- Update Member ---" << endl << endl;
        int inputID = GetInputINT(" Enter id: ");
        int IDx = CheckID(inputID);
        if(IDx == -1 || !$mem_exist[IDx]){
            cout << " Member ID not found" << endl;;
            return;
        }
        cout << " Name: " << $mem_name[IDx] << endl;
        cout << " Height: " << $mem_height[IDx] << "m" << endl;
        cout << " Weight: " << $mem_weight[IDx] << "kg" << endl << endl;
        
        $mem_height[$total_mem] = GetInputFLOAT(" Enter new height (m) : ");
        $mem_weight[$total_mem] = GetInputFLOAT(" Enter new weight (kg) : ");
        $mem_bmi[$total_mem] = GetBMI($total_mem);

        cout << " Member data was updated successfully !" << endl << endl;
    }

    void $Remove(){
        cout << "--- Remove Member ---" << endl << endl;
        int inputID = GetInputINT(" Enter id: ");
        int IDx = CheckID(inputID);
        if(IDx == -1 || !$mem_exist[IDx]){
            cout << " Member ID not found" << endl;;
            return;
        }

        $mem_exist[IDx] = false;

        cout << " Member was removed successfully !" << endl << endl;
    }

    void $Search(){
        cout << "--- Search Member ---" << endl << endl;
        int inputID = GetInputINT(" Enter id: ");
        int IDx = CheckID(inputID);
        if(IDx == -1 || !$mem_exist[IDx]){
            cout << " Member ID not found" << endl;;
            return;
        }

        cout << " Name:\t" << $mem_name[IDx] << endl;
        cout << " Height:\t" << $mem_height[IDx] << "m" << endl;
        cout << " Weight:\t" << $mem_weight[IDx] << "kg" << endl;
        cout << " BMI:\t" << $mem_bmi[IDx] << "kg" << endl;
    }

    void $Summary(){
        cout << "--- Summary ---" << endl << endl;
        int mem_count = 0;
        float height_avrg=0, height_min=2147483647, height_max=0;
        float weight_avrg=0, weight_min=2147483647, weight_max=0;
        float bmi_avrg=0, bmi_min=2147483647, bmi_max=0;

        for(int i=0; i<$total_mem; i++){
            if(!$mem_exist[i]) continue;
            mem_count++;
            float hx = $mem_height[i];
            float wx = $mem_weight[i];
            float bx = $mem_bmi[i];
            height_avrg += hx;
            if(hx>height_max) height_max=hx;
            if(hx<height_min) height_min=hx;
            weight_avrg += wx;
            if(wx>weight_max) weight_max=wx;
            if(wx<weight_min) weight_min=wx;
            bmi_avrg += bx;
            if(bx>bmi_max) bmi_max=bx;
            if(bx<bmi_min) bmi_min=bx;
        }
        if (mem_count==0)
        {
            cout << " [No member] " << endl;
            return;
        }
        
        height_avrg /= mem_count;
        weight_avrg /= mem_count;
        bmi_avrg /= mem_count;
        cout << "\tMinimum\tMaximum\tAverage" << endl;
        cout << "Height:\t" << height_min << "\t" << height_max << "\t" << height_avrg << endl;
        cout << "Weight:\t" << weight_min << "\t" << weight_max << "\t" << weight_avrg << endl;
        cout << "BMI:\t" << bmi_min << "\t" << bmi_max << "\t" << bmi_avrg << endl;
    }

    void $BMI(){
        cout << "--- BMI Classification ---" << endl << endl;
        int inputID = GetInputINT(" Enter id: ");
        int IDx = CheckID(inputID);
        if(IDx == -1 || !$mem_exist[IDx]){
            cout << " Member ID not found" << endl;
            return;
        }

        cout << " Name:\t" << $mem_name[IDx] << endl;
        cout << " BMI:\t" << $mem_bmi[IDx] << endl;
        cout << " BMI classification:\t";
        float bx = $mem_bmi[IDx];
        if(bx<16) cout << "Severe Thinness";
        else if(bx>=16 && bx<=17) cout << "Moderate Thinness";
        else if(bx>=17 && bx<=18.5) cout << "Mild Thinness";
        else if(bx>=18.5 && bx<=25) cout << "Normal";
        else if(bx>=25 && bx<=30) cout << "Overweight";
        else if(bx>=30 && bx<=35) cout << "Obese Class I";
        else if(bx>=35 && bx<=40) cout << "Obese Class II";
        else if(bx>=40) cout << "Obese Class III";

        cout << endl;
    }
};

int Menu(){
    cout << endl;
    cout << " --------------------" << endl;
    cout << " *** Main menu ***" << endl;
    cout << " 1. Add Member" << endl;
    cout << " 2. Update Member" << endl;
    cout << " 3. Remove Member" << endl;
    cout << " 4. Summary" << endl;
    cout << " 5. Search" << endl;
    cout << " 6. BMI" << endl;
    cout << " 0. Exit" << endl;
    cout << " --------------------" << endl;
    cout << "    Enter option: ";
    int option;
    cin >> option;
    cout << endl;
    return option;
}

int main(){
    Member m;
    cout  << "Welcome to My Gym" << endl;

    while (1)
    {
        int option = Menu();
        if(option == 0) break;

        switch (option)
        {
            case 1 : m.$Add(); break;
            case 2 : m.$Update(); break;
            case 3 : m.$Remove(); break;
            case 4 : m.$Summary(); break;
            case 5 : m.$Search(); break;
            case 6 : m.$BMI(); break;
        }
    }    

    return 0;
}
