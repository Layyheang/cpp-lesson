#include<iostream>
using namespace std;
class Exchangeconvertor{
public:
    long rate;
    long exChange(long amount );
    void setRate(long exrate = 4120) {
     rate = exrate;
    }
}; 

long Exchangeconvertor::exChange(long amount){
    return amount * rate;
}
int main(){
    Exchangeconvertor exKHR;
    exKHR.setRate(4210);
    long ex =exKHR.exChange(6000);
    cout <<"The amount is "<< ex << endl;
    return 0;

}