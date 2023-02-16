// Name: Jesse Chen
// Date: Last modified 2/9/2023
// Description: Programed a Book class that has a title, author, page count, and if the book is available digitally. 
//              By default the book is set to not digital. Calling the Digitial function would set it to being Digital. 
//              Pages are initally set to 0, you can change the number of pages, but a entry of 0 or less will not be taken. 

#include "Book.hpp"

// Constructors
Book::Book() { 
    title_ = "";
    author_ = "";
    pageCount_ = 0;
    digital_ = false; 
}

// Constructs with 4 parameters of Title, Author, PageCount, and Digital that are all constants. 
// Title and Author are string variables, PageCount is a int variable, and Digital is a bool variable. 
// These Variables are pointers the address of the variables. 
Book::Book(const string& Title, const string& Author, const int& Page_Count, const bool& Digital) {
    this->title_ = Title; 
    this->author_ = Author; 
    this->pageCount_ = Page_Count; 
    this->digital_ = Digital; 
}

// Getters

// @pre Needs the object to be initialized
// @post No postconditions
// @param none
// @return Returns the title of the book as a string
string Book::getTitle() const {
    return title_; 
}

// @pre Needs the object to be initialized
// @post No postconditions
// @param none
// @return Returns the author of the book as a string
string Book::getAuthor() const {
    return author_; 
}

// @pre Needs the object to be initialized
// @post No postconditions
// @param none
// @return Returns the page count of the book as an integer
int Book::getPageCount() const {
    return pageCount_; 
}

// @pre Needs the object to be initialized
// @post No postconditions
// @param none
// @return Returns if the book is digital, returns a true or false value
bool Book::isDigital() const { 
    return digital_; 
}

// Setters

// @pre Needs the object to be initialized
// @post Changes the string value of title_ with new_Title_
// @param Pointer address to a constant string variable called new_Title_
// @return No returns
void Book::setTitle(const string& new_Title_) {
    title_ = new_Title_; 
}

// @pre Needs the object to be initialized
// @post Changes the string value of author_ with new_Author_
// @param Pointer address to a constant string variable called new_Author
// @return No returns
void Book::setAuthor(const string& new_Author_) {
    author_ = new_Author_; 
}

// @pre Needs the object to be initialized
// @post Changes the string value of pageCount_ with new_Page_Count_
// @param Pointer address to a constant int variable called new_Page_Count_
// @return No returns
void Book::setPageCount(const int& new_Page_Count_) {
    if (new_Page_Count_ > 0) {
        pageCount_ = new_Page_Count_;
    }
}

// @pre Needs the object to be initialized
// @post Changes the bool value of digital_ to true
// @param No Parameters
// @return No returns
void Book::setDigital() { // when call this function, Digital becomes true
    digital_ = true; 
}
/*
int main() {
    std::cout << "TEST 1: TEST DEFAULT CONSTRUCTOR & ACCESSORS" << std::endl;

    // Test default constructor
    Book my_book;

    // Test accessor functions
    std::cout << my_book.getTitle() << std::endl;
    std::cout << my_book.getAuthor() << std::endl;
    std::cout << my_book.getPageCount() << std::endl;
    std::cout << my_book.isDigital() << std::endl;


    std::cout << "\nTEST 2: TEST PARAMETERIZED CONSTRUCTOR & ACCESSORS" << std::endl;

    // Test parameterized constructor
    Book my_book1("Harry Potter and the Chamber of Secrets", "J.K Rowling", 253, 1);
    Book my_book2("Moby Dick", "Herman Melville", 378);

    // Test accessor functions
    std::cout << my_book1.getTitle() << " By " << my_book1.getAuthor()
        << " with page count " << my_book1.getPageCount() << std::endl;
    std::cout << "Digital: " << my_book1.isDigital() << std::endl;

    std::cout << my_book2.getTitle() << " By " << my_book2.getAuthor()
        << " with page count " << my_book2.getPageCount() << std::endl;
    std::cout << "Digital: " << my_book2.isDigital() << std::endl;


    std::cout << "\nTEST 3: TEST MUTATOR FUNCTIONS" << std::endl;

    // Test mutator functions
    Book my_book3("Moby Dick", "Herman Melville", 378);
    my_book3.setTitle("50 shades of gray");
    my_book3.setAuthor("E. L. James");
    my_book3.setPageCount(514);
    my_book3.setPageCount(-10);
    my_book3.setDigital();

    // Test accessor functions
    std::cout << my_book3.getTitle() << " By " << my_book3.getAuthor()
        << " with page count " << my_book3.getPageCount() << std::endl;
    std::cout << "Digital: " << my_book3.isDigital() << std::endl;

    return 0; 
}
*/