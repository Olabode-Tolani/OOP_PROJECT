#include "book_item.h"
#include <iostream>
#include <iomanip>

// Constructor
BookItem::BookItem(const std::string& title, const std::string& author, const std::string& isbn)
    : LibraryItem(title), author(author), isbn(isbn) {}

// Getters
std::string BookItem::getAuthor() const { return author; }
std::string BookItem::getISBN() const { return isbn; }

// Member Functions
void BookItem::printDetails() const {
    std::cout << "Title: " << title
              << "\nAuthor: " << author
              << "\nISBN: " << isbn
              << "\nChecked Out: " << (isCheckedOut ? "Yes" : "No")
              << "\nDue Date: " << (isCheckedOut ? dueDate : "N/A")
              << std::endl;
}

double BookItem::calculateLateFees(int daysOverdue) const {
    const double lateFeePerDay = 500.00; // This sets the late fee rate at 500 naira per day.
    return daysOverdue * lateFeePerDay;
}
