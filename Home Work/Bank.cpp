#include<iostream>
using namespace std;
class bankAccount{
private: 
    string customerName;
    int customerID;
    double balanceAmount;
public:
    void setName(string cName){
        customerName = cName;
    } 
    void setID(int cID){
        customerID = cID;
    }  
    void setBalance(double bAmount){
        if(bAmount >= 0) {
        balanceAmount += bAmount;
      } else{
        cout << "The balance cannot be smaller than 0" << endl;
        balance = 0.00;
      }
    }
        
    } 
    

    };
int main(){
    bankAccount layheang;
    cin<<"put your want to withdawl amount:"<<layheang.setBalance()<<endl;
   
    return 0;
}