#ifndef BOOK_HPP_
#define BOOK_HPP_

#include <iostream>
#include <string>
using namespace std; 

// Every Book has a title, an author, the page count, 
// and finally a boolean to indicate whether or not that book is available digitally.

class Book
{
    private: 
        string Title;
        string Author;
        int PageCount;
        bool Digital;

    public: //only accessor and mutator functions

        Book();
        Book(const string &Title, const string &Author, const int &PageCount, const bool &Digital = false);
    
        string getTitle() const;
        string getAuthor() const;
        int getPageCount() const;
        bool isDigital() const;

        void setTitle(const string &Title);
        void setAuthor(const string &Author);
        void setPageCount(const int &PageCount);
        void setDigital(const bool &Digital = false);
};

#endif
