#ifndef NOVEL_HPP
#define NOVEL_HPP

#include <iostream>
#include "Book.hpp"
using namespace std; 

class Novel : public Book
{
    public: 
        Novel();
        Novel(const string& Title, const string& Author, const int& Page_Count, const string& genre, 
              const bool& Digital = false, const bool& film = false);

    private: 
        string genre; 
        // a vector of strings storing the characters in the novel (a character list)
        // a vector of reviews (type review defined in the above struct) storing the reviews for this novel
        float average_rating_; 
        bool film; 

};

#endif