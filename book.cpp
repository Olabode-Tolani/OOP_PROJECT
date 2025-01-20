#include "book.h"

// Constructor
Book::Book(const std::string& title, const std::string& author, const std::string& isbn)
    : title(title), author(author), isbn(isbn) {}

// Getters
std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getISBN() const { return isbn; }

// Setters
void Book::setTitle(const std::string& title) { this->title = title; }
void Book::setAuthor(const std::string& author) { this->author = author; }
void Book::setISBN(const std::string& isbn) { this->isbn = isbn; }
