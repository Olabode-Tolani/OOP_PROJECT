ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <string>
#include "book_item.h"
#include "patron.h"
#include "patron_record.h"

class Library {
private:
    std::vector<BookItem> books;
    std::vector<Patron> patrons;
    std::vector<PatronRecord> patronRecords;

public:
    // Declaration of the function to add books and patrons
    void addBook(const BookItem& book);
    void addPatron(const Patron& patron);

    // Declaration of the function to borrow and return books
    void borrowBook(const std::string& isbn, const std::string& patronCardNumber);
    void returnBook(const std::string& isbn, const std::string& patronCardNumber);

    // Declaration of the search functionalities
    void searchBooksByTitle(const std::string& title) const;
    void searchBooksByAuthor(const std::string& author) const;
    void searchPatronByName(const std::string& name) const;
};

#endif // LIBRARY_H
