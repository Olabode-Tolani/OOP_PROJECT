#ifndef PATRON_H
#define PATRON_H

#include <string>

class Patron {
private:
    std::string name;
    std::string libraryCardNumber;
    std::string contactInfo;

public:
    // Constructor
    Patron(const std::string& name, const std::string& libraryCardNumber);

    // Getters
    std::string getName() const;
    std::string getLibraryCardNumber() const;

    // Setters
    void setContactInfo(const std::string& contactInfo);

    
    void updateContactInfo(const std::string& newContactInfo);
    bool canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const;
};

#endif
