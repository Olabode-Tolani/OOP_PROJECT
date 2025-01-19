#include "patron.h"

// Constructor
Patron::Patron(const std::string& name, const std::string& libraryCardNumber)
    : name(name), libraryCardNumber(libraryCardNumber) {}

// Getters
std::string Patron::getName() const { return name; }
std::string Patron::getLibraryCardNumber() const { return libraryCardNumber; }

// Setters
void Patron::setContactInfo(const std::string& contactInfo) { this->contactInfo = contactInfo; }

// Additional Functions
void Patron::updateContactInfo(const std::string& newContactInfo) { setContactInfo(newContactInfo); }

bool Patron::canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const {
    return currentBorrowedCount < maxLimit;
}
