#ifndef BOOK_ITEM_H
#define BOOK_ITEM_H

#include "library_item.h"
#include <string>

class BookItem : public LibraryItem {
private:
    std::string author;
    int ISBN;

public:
   // Constructor calling the base class constructor
    BookItem(const std::string& title, const std::string& author, const int& ISBN)
    :LibraryItem(title) , author(author),ISBN(ISBN){}
    
    void printDetails() const{};
    double calculateLateFees(int daysOverdue) const{};
    
    std::string getAuthor() const;
    std::string getISBN() const;
};

#endif