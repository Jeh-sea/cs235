#ifndef BOOK_HPP_
#define BOOK_HPP_

#include <iostream>
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
        Book(const string &Title, const string &Author, const int &PageCount, const bool &Digital);
    
        string getTitle() const;
        string getAuthor() const;
        int getPageCount() const;
        bool isDigital() const;

        void setTitle(string Title);
        void setAuthor(string Author);
        void setPageCount(int PageCount);
        void setDigital(bool Digital = false);
};


#endif
