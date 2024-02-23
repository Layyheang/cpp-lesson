#include<iostream>
using namespace std;

class Animal {
public :
    string name;
    int age;

    void getName () {
        cout << "Name :" << name << endl;   
    }   
    void getAT () {
        cout << name <<" is " << age << "years old " << endl;
    }
    void runAt (string place) {
        cout << name << " run at " << place << endl;
    }
    void bark (string stranger){
        cout << name << "bark at " << stranger << endl;
    }
};

int main(){
    Animal myPet;
    myPet.name = "coca";
    myPet.age = 1;
    myPet.getName();
    myPet.getAT();
    myPet.runAt("HIIII");
    myPet.bark ("running");
    return 0;

}