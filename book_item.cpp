#include "book_item.h"


// Constructor
BookItem::BookItem(const std::string& title, const std::string& author, const int& ISBN)
    : LibraryItem(title), author(author), ISBN(ISBN) {}

// Getters
std::string BookItem::getAuthor() const { return author; }
std::string BookItem::getISBN() const { return ISBN; }

// Print details
void BookItem::printDetails() const {
    std::cout << "Title: " << getTitle() << "\n"
              << "Author: " << author << "\n"
              << "ISBN: " << ISBN << "\n"
              << "Availability: " << (getIsCheckedOut() ? "Checked Out" : "Available") << std::endl;
}

// Calculate late fees
double BookItem::calculateLateFees(int daysOverdue) const {
    const double dailyRate = 0.5; // Example rate
    return daysOverdue * dailyRate;
}