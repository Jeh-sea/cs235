#ifndef TEXTBOOK_HPP
#define TEXTBOOK_HPP

#include <iostream>
#include "Book.hpp"
using namespace std; 

class Textbook : public Book
{
    public:
        Textbook();
        Textbook(const string& Title, const string& Author, const int& Page_Count, const string& subject_, /* grade-level type*/
                 const bool& Digital = false, const bool& has_review_ = false);

        string setSubject(string& subject_);
        string getSubject();

        /* setGradeLevel of type grade_level @param reference to a grade_level
           getGradeLevel returns grade level*/
        
        bool setReviewQuestions();
        bool checkReviewQuestions();

    private: 
        string subject_;
        //variable of type grade_level that represents the grade level of the book
        bool has_review_;
};

#endif