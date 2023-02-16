#ifndef BOOK_HPP_
#define BOOK_HPP_

#include <iostream>
#include <string>
using namespace std; 

class Book
{
    public: //only accessor and mutator functions
        Book();

        // Constructs with 4 parameters of Title, Author, PageCount, and Digital that are all constants. 
        // Title and Author are string variables, PageCount is a int variable, and Digital is a bool variable. 
        // These Variables are pointers the address of the variables. 
        // The Digital bool is set to false on initialization
        Book(const string& Title, const string& Author, const int& Page_Count, const bool& Digital = false);
    
        // @pre No preconditions
        // @post No postconditions
        // @param none
        // @return none
        string getTitle() const;

        // @pre No preconditions
        // @post No postconditions
        // @param none
        // @return none
        string getAuthor() const;

        // @pre No preconditions
        // @post No postconditions
        // @param none
        // @return none
        int getPageCount() const;

        // @pre No preconditions
        // @post No postconditions
        // @param none
        // @return none
        bool isDigital() const;

        // @pre No preconditions
        // @post No postconditions
        // @param constant string variable that points to the address of new_Title_
        // @return none
        void setTitle(const string& new_Title_);

        // @pre No preconditions
        // @post No postconditions
        // @param constant string variable that points to the address of new_Author_
        // @return none
        void setAuthor(const string& new_Author_);

        // @pre No preconditions
        // @post No postconditions
        // @param constant string variable that points to the address of new_Page_Count_
        // @return none
        void setPageCount(const int& new_Page_Count_);

        // @pre No preconditions
        // @post No postconditions
        // @param none
        // @return none
        void setDigital();
        
    protected: 
        string title_;
        string author_;
        int pageCount_;
        bool digital_;
};
#endif