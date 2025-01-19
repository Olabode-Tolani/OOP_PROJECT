#include "library.h"
#include <iostream>
#include <algorithm>

// Definition of function to add a book to the library
void Library::addBook(const BookItem& book) {
    books.push_back(book);
}

// Definition of function to add a patron to the library
void Library::addPatron(const Patron& patron) {
    patrons.push_back(patron);
    patronRecords.emplace_back(); // Create an empty record for the patron
}

// Definition of function to borrow a book
void Library::borrowBook(const std::string& isbn, const std::string& patronCardNumber) {
    auto bookIt = std::find_if(books.begin(), books.end(),
                               [&](const BookItem& book) { return book.getISBN() == isbn; });

    if (bookIt != books.end() && !bookIt->getIsCheckedOut()) {
        bookIt->checkOut("01-01-2025"); 
        for (size_t i = 0; i < patrons.size(); ++i) {
            if (patrons[i].getLibraryCardNumber() == patronCardNumber) {
                patronRecords[i].addBook(*bookIt);
                break;
            }
        }
    } else {
        std::cout << "Book is unavailable.\n";
    }
}

// Definition of function to return a book
void Library::returnBook(const std::string& isbn, const std::string& patronCardNumber) {
    for (size_t i = 0; i < patrons.size(); ++i) {
        if (patrons[i].getLibraryCardNumber() == patronCardNumber) {
            patronRecords[i].removeBook(isbn);
            break;
        }
    }

    auto bookIt = std::find_if(books.begin(), books.end(),
                               [&](const BookItem& book) { return book.getISBN() == isbn; });

    if (bookIt != books.end()) {
        bookIt->returnItem();
    }
}

// Definition of function to search books by title
void Library::searchBooksByTitle(const std::string& title) const {
    for (const auto& book : books) {
        if (book.getTitle() == title) {
            book.printDetails();
        }
    }
}

// Definition of function to search books by author
void Library::searchBooksByAuthor(const std::string& author) const {
    for (const auto& book : books) {
        if (book.getAuthor() == author) {
            book.printDetails();
        }
    }
}

// Definition of function to search patron by name
void Library::searchPatronByName(const std::string& name) const {
    for (const auto& patron : patrons) {
        if (patron.getName() == name) {
            std::cout << "Name: " << patron.getName()
                      << "\nLibrary Card Number: " << patron.getLibraryCardNumber()
                      << std::endl;
        }
    }
}
