#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "book_item.h"
#include "patron.h"
#include "patron_record.h"

class Library {
private:
    std::vector<BookItem> books;
    std::vector<Patron> patrons;
    std::vector<PatronRecord> patronRecords;

public:
    void addBook(const BookItem& book){};
    void addPatron(const Patron& patron){};
    void borrowBook(const std::string& ISBN, const int& patronCardNumber){};
    void returnBook(const std::string& ISBN, const int& patronCardNumber){};
    void listOverdueBooks() const{};
    void notifyPatronsWithOverdueBooks() const{};
    void generateLibraryReport() const{};
};
#endif