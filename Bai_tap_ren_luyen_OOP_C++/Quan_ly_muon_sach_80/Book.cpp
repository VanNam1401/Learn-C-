#include <iostream>
#pragma once
using namespace std;

class Book
{
    string nameBook;
    string nameAuthor;
    int numberBook;
    public:
    Book(){}
    Book(string nameBook, string nameAuthor, int numberBook) : nameBook(nameBook), nameAuthor(nameAuthor), numberBook(numberBook) {}
    string getNameBook()
    {
        return this->nameBook;
    }
    string getNameAuthor()
    {
        return this->nameAuthor;
    }
    int getNumberBook()
    {
        return this->numberBook;
    }
    void display()
    {
        cout << "Name Book: " << getNameBook() << endl;
        cout << "Name Author: " << getNameAuthor() << endl;
        cout << "Number Book: " << getNumberBook() << endl;
    }
};