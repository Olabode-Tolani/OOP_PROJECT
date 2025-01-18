#ifndef PATRON_RECORD_H
#define PATRON_RECORD_H

#include <vector>
#include "book_item.h"

class PatronRecord {
private:
    std::vector<BookItem> checkedOutBooks;

public:
    void addBook(const BookItem& book){};
    void removeBook(const std::string& ISBN){};
    void listCheckedOutBooks() const{};
    void getBorrowedBookCount()const{};
    void  hasOverdueBooks() const{};
    void calculateLateFees() const{};
};

#endif