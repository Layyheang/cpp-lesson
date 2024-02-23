#include <iostream>
using namespace std;
class Exchangeconvertor {
public:
    float rate; 
    long exchange(long amount){
        return amount * rate;
    }
    
};

int main(){
    Exchangeconvertor exKHR;
    exKHR.rate = 4000 ;
    long exValue = exKHR.exchange(500);
    cout << "Amount in KHR" << exValue;
    return 0;

}