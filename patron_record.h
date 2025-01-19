#include "patron_record.h"
#include <iostream>

// Add a book to the record
void PatronRecord::addBook(const BookItem& book) {
    checkedOutBooks.push_back(book);
}

// Remove a book from the record
void PatronRecord::removeBook(const std::string& isbn) {
    checkedOutBooks.erase(std::remove_if(checkedOutBooks.begin(), checkedOutBooks.end(),
                                         [&](const BookItem& book) { return book.getISBN() == isbn; }),
                          checkedOutBooks.end());
}

// List all checked-out books
void PatronRecord::listCheckedOutBooks() const {
    for (const auto& book : checkedOutBooks) {
        book.printDetails();
        std::cout << "--------------------------" << std::endl;
    }
}

// Get the count of borrowed books
int PatronRecord::getBorrowedBookCount() const {
    return checkedOutBooks.size();
}

// Check for overdue books (for simplicity, assume all books are overdue)
bool PatronRecord::hasOverdueBooks() const {
    // Placeholder for actual overdue logic
    return !checkedOutBooks.empty();
}

// definition of function to calculate total late fees for all books
double PatronRecord::calculateTotalLateFees() const {
    double totalFees = 0.0;
    for (const auto& book : checkedOutBooks) {
        totalFees += book.calculateLateFees(10); // Assume 10 days overdue for all
    }
    return totalFees;
}
