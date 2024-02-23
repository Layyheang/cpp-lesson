#include <iostream>
using namespace std;
class Exchangeconvertor {
public:
    long rate;
    long exchange(long amount);
};
long Exchangeconvertor::exchange(long amount){
    return amount * rate;
}

int main(){
    // for khmer real 
    Exchangeconvertor exKHR;
    exKHR.rate = 4150;
    long exvaluekhr = exKHR.exchange(500);
    cout << "Amount for KHR : "<< exvaluekhr << endl;

    // for Thai bat
    Exchangeconvertor exBadt;
    exBadt.rate = 35;
    long exvalueBadt = exBadt.exchange(6000);
    cout <<"Amout of Bat : "<< exvalueBadt << endl;
return 0;
}