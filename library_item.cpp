#include "library_item.h"

// Constructor
LibraryItem::LibraryItem(const std::string& title)
    : title(title), isCheckedOut(false), dueDate("") {}

// Destructor
LibraryItem::~LibraryItem() {}

// Function to mark the item as lost
void LibraryItem::markAsLost() {
    isCheckedOut = true;  // This marks the item as unavailable
    dueDate = "Lost";     // This sets due date to "Lost"
}

// Function to check out the item
void LibraryItem::checkOut(const std::string& dueDate) {
    isCheckedOut = true;
    this->dueDate = dueDate;
}

// Function to return the item
void LibraryItem::returnItem() {
    isCheckedOut = false;
    dueDate = "";
}

// Function to renew the item
void LibraryItem::renewItem(int extraDays) {
    // This code tends to extend due date by extraDays
    dueDate = "Renewed for " + std::to_string(extraDays) + " days";
}

// Getters
std::string LibraryItem::getTitle() const {
    return title;
}

bool LibraryItem::getIsCheckedOut() const {
    return isCheckedOut;
}

