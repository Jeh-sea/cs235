#include "Book.hpp"

// 2/6 changes

Book::Book() {
    title_ = "";
    author_ = "";
    pageCount_ = 0;
    digital_ = false; 
}

Book::Book(const string& Title, const string& Author, const int& PageCount, const bool& Digital) {
    this->title_ = Title; 
    this->author_ = Author; 
    this->pageCount_ = PageCount; 
    this->digital_ = Digital; 
}

string Book::getTitle() const {
    return title_; 
}

string Book::getAuthor() const {
    return author_; 
}

int Book::getPageCount() const {
    return pageCount_; 
}

bool Book::isDigital() const { 
    return digital_; 
}

void Book::setTitle(const string& new_Title_) {
    title_ = new_Title_; 
}

void Book::setAuthor(const string& new_Author_) {
    author_ = new_Author_; 
}

void Book::setPageCount(const int& new_Page_Count_) {
    if (new_Page_Count_ > 0) {
        pageCount_ = new_Page_Count_;
    }
}

void Book::setDigital() { // when call this function, Digital becomes true
    digital_ = true; 
}
