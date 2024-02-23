#include <iostream>
using namespace std;

class book {
// attribute:
public:
    string title;
    int year;
    string author;   
// behavior:
public:
    void add(string t, int y, string a){
        title = t;
        year = y;
        string ming ;
    }
    void display (){
        cout <<"Title:" << title << endl;
        cout << "Year" << year << endl;
        cout <<"Author" << author << endl;
    }
};
int main(){
    int x;
    book book1;
    cout <<"Book1......\n";
    book1.add ("hello OOM & P",2023, "chhorpong");
    book1.display();
    book book2;
    cout <<"Book2.....\n";
    book2.add ("How to create HTML",2024,"Layheang");
    book2.display();
    return 0;
    

}