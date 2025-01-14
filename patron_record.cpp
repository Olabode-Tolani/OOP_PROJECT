#include "patron_record.h"

// Add a book to the record
void PatronRecord::addBook(const BookItem& book) {
    checkedOutBooks.push_back(book);
}

// Remove a book from the record
void PatronRecord::removeBook(const int& ISBN) {
    checkedOutBooks.erase(std::remove_if(checkedOutBooks.begin(), checkedOutBooks.end(),
        [&ISBN](const BookItem& book) { return book.getISBN() == ISBN; }),
        checkedOutBooks.end());
}

// List checked-out books
void PatronRecord::listCheckedOutBooks() const {
    for (const auto& book : checkedOutBooks) {
        book.printDetails();
    }
}

// Check if there are overdue books
bool PatronRecord::hasOverdueBooks() const {
    // Example logic
    return false;
}

// Calculate total late fees
double PatronRecord::calculateTotalLateFees() const {
    double totalFees = 0.0;
    for (const auto& book : checkedOutBooks) {
        // Example calculation
    }
    return totalFees;
}