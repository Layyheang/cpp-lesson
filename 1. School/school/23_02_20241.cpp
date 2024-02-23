#include<iostream>
using namespace std;
class Multiplier {
    private: 
        int result, a, b; 
    public:
        void input(){
            cout <<"Enter two numbers: ";
            cin >> a >> b; 
        }    
        void compute(){ result = a * b;}
        void display(){ cout << "Result is " << result;}
};

class Addition{
    private: 
        int result, a, b; 
    public:
        void input(){
            cout <<"Enter two numbers: ";
            cin >> a >> b; 
        }    
        void compute(){ result = a + b;}
        void display(){ cout << "Result is " << result;}

};
int main(){
    Multiplier multiply;
    multiply.input();
    multiply.compute();
    multiply.display();
    return 0;

}