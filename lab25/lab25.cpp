#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  10/3/2017
  2.5 Lab - Classes & Mutator Functions
*/

//The class function for book.
class Book{
    
    public: //The class public function
    //Mutators
        void SetBookTitle(string title);
        void SetBookAuthor(string author);
        void SetBookCopyRightYear(int copyright_year);
        void PrintFunction();
    //Accessors
        string GetBookTitle()const;
        string GetBookAuthor()const;
        int GetBookCopyRightYear()const;
    
    private: //The class private internal data members
        string book_title;
        string book_author;
        int book_copyright_year = 0;
    
};

//Set book title function
void Book::SetBookTitle(string title){
    
    book_title = title;
    return;
    
}
//Set book author function
void Book::SetBookAuthor(string author){
    
    book_author = author;
    return;
    
}
//Set book copyright year function
void Book::SetBookCopyRightYear(int copyright_year){
    
    book_copyright_year = copyright_year;
    return;
    
}
//The Print function prints out my output variables
void Book::PrintFunction(){
    
    cout << "Title: " << GetBookTitle() << endl;
    cout << "Author: " << GetBookAuthor() << endl;
    cout << "Copyright Year: " << GetBookCopyRightYear() << endl;
    cout<< endl;
    
}
// Gets title function
string Book::GetBookTitle()const{
    return book_title;
}
//Gets author function
string Book::GetBookAuthor()const{
    return book_author;
}
//Gets Copyright Year function
int Book::GetBookCopyRightYear()const{
    return book_copyright_year;
}



int main() {
    
    Book book1; // This object created for class type Book
    
    book1.SetBookTitle("Harry Potter and the Sorcerer's Stone");
    book1.SetBookAuthor("J.K.Rowling");
    book1.SetBookCopyRightYear(1997);
    book1.PrintFunction();
    
    Book book2; //Second object for Book
    
    book2.SetBookTitle("Harry Potter and the Chamber of Secrets");
    book2.SetBookAuthor("J.K.Rowling");
    book2.SetBookCopyRightYear(1999);
    book2.PrintFunction();
    
    Book book3; //Third object for Book
    
    book3.SetBookTitle("Harry Potter and the Prisoner of Azkaban");
    book3.SetBookAuthor("J.K.Rowling");
    book3.SetBookCopyRightYear(1999);
    book3.PrintFunction();
    
    Book book4; //Fourth object for Book
    
    book4.SetBookTitle("Harry Potter and the Goblet of Fire");
    book4.SetBookAuthor("J.K.Rowling");
    book4.SetBookCopyRightYear(2000);
    book4.PrintFunction();
    
    Book book5; //Fifth object for Book
    
    book5.SetBookTitle("Harry Potter and the Order of the Phoenix");
    book5.SetBookAuthor("J.K.Rowling");
    book5.SetBookCopyRightYear(2003);
    book5.PrintFunction();
    
    
    return 0;
}
/*
Title: Harry Potter and the Sorcerer's Stone
Author: J.K.Rowling
Copyright Year: 1997

Title: Harry Potter and the Chamber of Secrets
Author: J.K.Rowling
Copyright Year: 1999

Title: Harry Potter and the Prisoner of Azkaban
Author: J.K.Rowling
Copyright Year: 1999

Title: Harry Potter and the Goblet of Fire
Author: J.K.Rowling
Copyright Year: 2000

Title: Harry Potter and the Order of the Phoenix
Author: J.K.Rowling
Copyright Year: 2003

*/