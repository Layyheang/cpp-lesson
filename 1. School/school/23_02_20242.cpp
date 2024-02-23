#include <iostream>
using namespace std;
class IOpertion {
private:
    int a;
public:    
    int input(){
        cout << "enter number: ";
        cin >> a;
        return a;
    }
    void display(int result) {
        cout << "Result is " << result;
    }  
    void displayerror(){
        cout << "display if any error";
    }  
};

class Multiplier {
private:
    int result, a, b;
public:
    int compute(int a, int b) {
        return (a * b);
    }        
};

int main(){
    Multiplier multiply;
    IOpertion iop;
    int x = iop.input();
    int y = iop.input();
    int result = multiply.compute(x, y);
    iop.display(result);
    return 0;

}
