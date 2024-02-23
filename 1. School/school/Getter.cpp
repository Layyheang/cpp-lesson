#include<iostream>
using namespace std;
class Bank{
private:
    string bankName = "APD Bank";
    string staffID = "A0460";
public:
    string getBankname() const{
        return bankName; 
    }
    string getStaff() const {
        return staffID;
    }
    
};
int main(){
    Bank Layheang;
    cout<<"Welcome to new on board: "<<Layheang.getBankname()<<endl; 
    cout<<"You staff Id: "<<Layheang.getStaff()<<endl;
    return 0;
}