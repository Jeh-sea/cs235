#ifndef BOOK_HPP_
#define BOOK_HPP_

#include <iostream>
#include <string>
using namespace std; 

class Book
{
    public: //only accessor and mutator functions
        Book();
        Book(const string& Title, const string& Author, const int& PageCount, const bool& Digital = false);
    
        string getTitle() const;
        string getAuthor() const;
        int getPageCount() const;
        bool isDigital() const;

        void setTitle(const string& new_Title_);
        void setAuthor(const string& new_Author_);
        void setPageCount(const int& new_Page_Count_);
        void setDigital();
        
    private: 
        string title_;
        string author_;
        int pageCount_;
        bool digital_;
};
#endif
