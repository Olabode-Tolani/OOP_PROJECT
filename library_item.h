#ifndef LIBRARY_ITEM_H
#define LIBRARY_ITEM_H

#include <string>

class LibraryItem {
protected:
    std::string title;
    bool isCheckedOut;
    std::string dueDate;

public:
    // Constructor
    LibraryItem(const std::string& title);

    //Destructor
    virtual ~LibraryItem();



    // Member Functions
    virtual void checkOut(const std::string& dueDate);
    virtual void returnItem();
    virtual void renewItem(int extraDays);
    virtual void markAsLost();



    // Getters
    std::string getTitle() const;
    bool getIsCheckedOut() const;
};

#endif // LIBRARY_ITEM_H
