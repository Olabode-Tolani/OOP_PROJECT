#include "book.h"

Book::Book(const std::string& title, const std::string& author, const std::string& ISBN)
    : title(title), author(author), ISBN(ISBN) {}

std::string Book::getTitle() const{ 
    return title; 
}
void Book::setTitle(const std::string& title) { 
    this->title = title; 
}
std::string Book::getAuthor() const { 
    return author; 
}
void Book::setAuthor(const std::string& author) { 
    this->author = author; 
}
std::string Book::getISBN() const { 
    return ISBN; 
}
void Book::setISBN(const std::string& ISBB) { 
    this->ISBN = ISBN; 
}