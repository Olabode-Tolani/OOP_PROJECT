#ifndef BOOK_ITEM_H
#define BOOK_ITEM_H

#include "library_item.h"

class BookItem : public LibraryItem {
private:
    std::string author;
    std::string isbn;

public:
    // Constructor
    BookItem(const std::string& title, const std::string& author, const std::string& isbn);

    // Getters
    std::string getAuthor() const;
    std::string getISBN() const;

    // Member Functions
    void printDetails() const; // this will override a virtual function in the base class
    double calculateLateFees(int daysOverdue) const; // Override
};

#endif