#include "Book.hpp"

// 2/3

Book::Book() {
    Title = "";
    Author = "";
    PageCount = 0;
    Digital = false; 
}

Book::Book(const string &Title, const string &Author, int PageCount, bool Digital) {
    this->Title = Title; 
    this->Author = Author; 
    this->PageCount = PageCount; 
    this->Digital = Digital; 
}

string Book::getTitle() const {
    return this->Title; 
}

string Book::getAuthor() const {
    return this->Author; 
}

int Book::getPageCount() const {
    return this->PageCount; 
}

bool Book::isDigital() const { 
    if (this->Title == Title) {
        return (this->Digital);
    }
    return false; 
}

void Book::setTitle(const string Title) {
    this->Title = Title; 
}

void Book::setAuthor(const string Author) {
    this->Author = Author; 
}

void Book::setPageCount(const int PageCount) {
    if (PageCount > 0) {
        this->PageCount = PageCount;
    }
}

void Book::setDigital(bool Digital) {
    this->Digital = Digital; 
}

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
}
