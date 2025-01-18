#ifndef PATRON_H
#define PATRON_H

#include <string>

class Patron {
private:
    std::string name;
    int libraryCardNumber;


public:
    Patron(const std::string& name, const int& libraryCardNumber){};
    std::string getName() const{return name;};
    int getLibraryCardNumber() const{return libraryCardNumber;};
    void updateContactInfo(const std::string& newContactInfo){};
    void canBorrowMoreBooks(const int currentBorrowedCount, const int maxLimit) const {};
};

#endif