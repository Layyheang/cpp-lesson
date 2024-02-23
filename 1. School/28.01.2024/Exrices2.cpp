#include<iostream>
using namespace std;
class Book{
    public:
    string Title;
    string Author;
    int Years;

    Book(string T, string A, int Y){
        cout<<"New details abot book";
        Title = T;
        Author = A;
        Years = Y; 
    }
    
    void setTitle(string T) {
        Title = T;
    }

    void setAuthor(string A) {
        Author = A;
    }

    void setYear(int Y) {
        Years = Y;
    }

    void displayBook(){
        cout<<"Title:"<< Title << endl;
        cout<<"Author:"<< Author <<endl;
        cout<<"Year:"<< Years<<endl;
    }

};
int main(){
    Book Book1("Rich and Poor Dad","Robert Kiyosaki",1997 );
    Book1.displayBook();
    Book Book2("The 7 Habits of Highly Effective People", "Stephen Covey",1989);
    Book2.displayBook();
    return 0;
}