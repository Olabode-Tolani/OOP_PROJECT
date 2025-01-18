#ifndef BOOK_ITEM_H
#define BOOK_ITEM_H

#include "library_item.h"
#include <string>
#include <iostream>

class BookItem : public LibraryItem {
private:
    std::string title;
    std::string author;
    std::string ISBN;
    
public:
   // Constructor calling the base class constructor
    BookItem(const std::string& title, const std::string& author, const std::string& ISBN);


    
    // Method to print book details
    void printDetails() const override {
        std::cout << "Title: " << getTitle() << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "ISBN: " << ISBN << std::endl;
        std::cout << "Checked Out: " << (getIsCheckedOut() ? "Yes" : "No") << std::endl;
        std::cout << "Due Date: " << getDueDate() << std::endl;
    }
     // Method to calculate late fees
        int calculateLateFees(int daysOverdue) const override {
        const int feePerDay = 200; //  late fee per day
        return daysOverdue * feePerDay; // Calculate fees
    }
    

     std::string getAuthor()  { return author;};
     std::string getISBN()  { return ISBN;};

     void setISBN(const std::string& ISBN){this->ISBN = ISBN; };
     void setAuthor(const std::string& author){this-> author= author; };

};


#endif