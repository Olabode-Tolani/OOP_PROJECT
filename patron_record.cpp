#include "patron_record.h"

// Add a book to the record
void patronRecord::addBook(const BookItem& book) {
    checkedOutBooks.push_back(book);
}

// Remove a book from the record
void patronRecord::removeBook(const std::string& ISBN) {
    checkedOutBooks.erase(std::remove_if(checkedOutBooks.begin(), checkedOutBooks.end(),
        [&ISBN](const BookItem& book) { return book.getISBN() == ISBN; }),
        checkedOutBooks.end());
}

// List checked-out books
void patronRecord::listCheckedOutBooks() const {
    for (const auto& book : checkedOutBooks) {
        book.printDetails();
    }
}

// Check if there are overdue books
bool patronRecord::hasOverdueBooks() const {
    // Example logic
    return false;
}

// Calculate total late fees
double patronRecord::calculateTotalLateFees() const {
    double totalFees = 0.0;
    for (const auto& book : checkedOutBooks) {
        // Example calculation
    }
    return totalFees;
}