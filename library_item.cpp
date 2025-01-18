#include "library_item.h"

LibraryItem::LibraryItem(const std::string& title, const std::string& author,const std::string& ISBN)
    : title(title), author(author),isCheckedOut(false), dueDate(0),ISBN(ISBN) {}

std::string LibraryItem::getTitle() const { 
    return title; 
}
void LibraryItem::setDueDate(const int& dueDate) { 
    this->dueDate = dueDate; 
}

bool LibraryItem::getIsCheckedOut() const { 
    return isCheckedOut;
}
int LibraryItem::getDueDate() const { 
    return dueDate; 
}

// Methods
void LibraryItem::checkOut() { isCheckedOut = true; }
void LibraryItem::returnItem() { isCheckedOut = false; }
void LibraryItem::renewItem(int extraDays) 
void LibraryItem::markAsLost() { isCheckedOut = false; }

LibraryItem::LibraryItem(std::string title){}
LibraryItem::author(std::string){}
