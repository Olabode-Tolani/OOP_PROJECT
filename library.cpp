#include "library.h"
#include <iostream>
#include <algorithm>

// Add a book to the library
void Library::addBook(const BookItem& book) {
    books.push_back(book);
}

// Add a patron to the library
void Library::addPatron(const Patron& patron) {
    patrons.push_back(patron);
}

// Borrow a book
bool Library::borrowBook(const std::string& isbn, const std::string& patronCardNumber) {
    auto bookIt = std::find_if(books.begin(), books.end(),
                               [&isbn](const BookItem& book) { return book.getISBN() == isbn; });

    auto patronIt = std::find_if(patrons.begin(), patrons.end(),
                                 [&patronCardNumber](const Patron& patron) {
                                     return patron.getLibraryCardNumber() == patronCardNumber;
                                 });

    if (bookIt != books.end() && patronIt != patrons.end() && !bookIt->getIsCheckedOut()) {
        bookIt->checkOut();
        getPatronRecord(patronCardNumber).addBook(*bookIt);
        return true;
    }

    return false;
}

// Return a book
bool Library::returnBook(const std::string& isbn, const std::string& patronCardNumber) {
    auto bookIt = std::find_if(books.begin(), books.end(),
                               [&isbn](const BookItem& book) { return book.getISBN() == isbn; });

    if (bookIt != books.end() && bookIt->getIsCheckedOut()) {
        bookIt->returnItem();
        getPatronRecord(patronCardNumber).removeBook(isbn);
        return true;
    }

    return false;
}

// Search books by title
std::vector<BookItem> Library::searchBooksByTitle(const std::string& title) const {
    std::vector<BookItem> results;
    for (const auto& book : books) {
        if (book.getTitle() == title) {
            results.push_back(book);
        }
    }
    return results;
}

// Search books by author
std::vector<BookItem> Library::searchBooksByAuthor(const std::string& author) const {
    std::vector<BookItem> results;
    for (const auto& book : books) {
        if (book.getAuthor() == author) {
            results.push_back(book);
        }
    }
    return results;
}

// Check if a book is available
bool Library::isBookAvailable(const std::string& isbn) const {
    for (const auto& book : books) {
        if (book.getISBN() == isbn && !book.getIsCheckedOut()) {
            return true;
        }
    }
    return false;
}

// Reserve a book
bool Library::reserveBook(const std::string& isbn, const std::string& patronCardNumber) {
    auto bookIt = std::find_if(books.begin(), books.end(),
                               [&isbn](const BookItem& book) { return book.getISBN() == isbn; });

    if (bookIt != books.end() && !bookIt->getIsCheckedOut()) {
        bookIt->checkOut(); // Simulating reservation
        return true;
    }

    return false;
}

// List overdue books
std::vector<BookItem> Library::listOverdueBooks() const {
    std::vector<BookItem> overdueBooks;
    for (const auto& book : books) {
        // Example logic for overdue checking (needs proper date comparison logic)
        if (book.getIsCheckedOut()) {
            overdueBooks.push_back(book);
        }
    }
    return overdueBooks;
}

// Notify patrons with overdue books
void Library::notifyPatronsWithOverdueBooks() const {
    for (const auto& record : patronRecords) {
        if (record.hasOverdueBooks()) {
            std::cout << "Notification sent to patron with overdue books." << std::endl;
        }
    }
}

// Generate library report
void Library::generateLibraryReport() const {
    std::cout << "Library Report:" << std::endl;
    std::cout << "Total books: " << books.size() << std::endl;
    std::cout << "Checked out books: "
              << std::count_if(books.begin(), books.end(),
                               [](const BookItem& book) { return book.getIsCheckedOut(); })
              << std::endl;
}

// Get a reference to a patron's record
PatronRecord& Library::getPatronRecord(const std::string& patronCardNumber) {
    auto recordIt = std::find_if(patronRecords.begin(), patronRecords.end(),
                                 [&patronCardNumber](const PatronRecord& record) {
                                     // Example logic; adjust as needed
                                     return true;
                                 });
    if (recordIt == patronRecords.end()) {
        throw std::runtime_error("Patron record not found");
    }

    return *recordIt;
}