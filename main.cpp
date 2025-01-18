#include "book_item.h"
#include "patron.h"
#include "library.h"
#include <iostream>

int main() {
    Library library;

    // Adding 5 books to the library
    BookItem book1("introduction to object oriented programming", "Olabode Tolani", "20220091");
    BookItem book2("Data Structures in Depth", "Ajele Karen", "20220087");
    BookItem book3("Object-Oriented Design", "Auta Gloria", "20220112");
    BookItem book4("The Art of Programming", "Abrakasa Pearl", "20220216");
    BookItem book5("Clean Code", "Biaduo Tanana Chiemerie","20221518");

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addBook(book4);
    library.addBook(book5);

    // Adding a patron
    Patron patron1("Dr. Emmanuel Ali", 2025-01-18);
    library.addPatron(patron1);

    // Borrowing books
    std::cout << "\n--- Borrowing Books ---\n";
    library.borrowBook("20220091", 2025-01-19); 
    library.borrowBook("20220112", 2025-01-19);
    library.borrowBook("20221518", 2025-01-19); 

    // Generate library report after borrowing
    std::cout << "\n--- Library Report After Borrowing ---\n";
    library.generateLibraryReport();

    // Returning books
    std::cout << "\n--- Returning Books ---\n";
    library.returnBook("20220091", 2025-01-23); 
    library.returnBook("20220112", 2025-01-23); 
    
   
    // Generate library report after returning
    std::cout << "\n--- Library Report After Returning ---\n";
    library.generateLibraryReport();

    // Listing overdue books 
    std::cout << "\n--- Overdue Books ---\n";
    library.listOverdueBooks();

    return 0;
}
