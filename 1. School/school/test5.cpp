#include<iostream>
using namespace std;
class Staff{
protected:
    string ID = "A0460";
    string Information = "Digital Banking ";
public:
    void newInformation(){
        cout<<"We come new on borad"<<ID<<endl;
    }
      void newDepartment(){
        cout<<"wel come to new of part depament"<<Information<<endl;
    }
    
};




int main(){
    return 0;
}
