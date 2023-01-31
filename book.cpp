#include "Book.hpp"

Book::Book() {
    Title = "";
    Author = "";
    PageCount = 0;
    Digital = false; 
}

Book::Book(string Title, string Author, int PageCount, bool Digital) {
    this->Title = Title; 
    this->Author = Author; 
    this->PageCount = PageCount; 
    this->Digital = Digital; 
}

string Book::getTitle() {
    return Title; 
}

string Book::getAuthor() {
    return Author; 
}

int Book::getPageCount() {
    return PageCount; 
}

bool Book::isDigital(string Title) { //unsure about this
    if (this->Title == Title) {
        return (this->Digital);
    }
    return false; 
}

void Book::setTitle(string Title) {
    this->Title = Title; 
}

void Book::setAuthor(string Author) {
    this->Author = Author; 
}

void Book::setPageCount(int PageCount) {
    this->PageCount = PageCount;
}

void Book::setDigital(bool Digital) {
    this->Digital = Digital; 
}

int main() {

    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 180, true);

    cout << book1.isDigital("The Great Gatsby") << endl;
    return 0;
}