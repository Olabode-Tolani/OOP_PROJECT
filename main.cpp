include <iostream>
#include "book_item.h"
#include "patron.h"
#include "library.h"

int main() {
    Library library;

    // Add Books
    BookItem book1("Object Oriented Programming", "Olabode Tolani", "20220091");
    BookItem book2("Object Oriented Programming", "Ajele Karen", "20220087");
    BookItem book3("Object Oriented Programming", "Abrakasa Pearl", "20220216");
    BookItem book4("Obje#ct Oriented Programming", "Biaduo- Tanana Chiemerie", "20221518");
    BookItem book5("Obje#ct Oriented Programming", "Auta Gloria", "20220112");
    
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addBook(book4);
    library.addBook(book5);

    // Add Patrons
    Patron patron1("Dr Emmanuel Ali", "18-01-2025");
    

    library.addPatron(patron1);
    

    // Search for books by author
    std::cout << "\nSearching books by author 'Olabode Tolani':\n";
    library.searchBooksByAuthor("Olabode Tolani");

    // Search for books by title
    std::cout << "\nSearching books by title 'Object Oriented Programming':\n";
    library.searchBooksByTitle("Object Oriented Programming");

    // Borrowing books
    std::cout << "\nBorrowing book with ISBN 20220091 by patron Emmanuel Ali:\n";
    library.borrowBook("20220091", "18-01-2025");

    std::cout << "\nBorrowing book with ISBN 20220087 by patron Emmanuel Ali:\n";
    library.borrowBook("20220087", "18-01-2025");

    // Return books
    std::cout << "\nReturning book with ISBN 20220091 by patron Emmanuel Ali:\n";
    library.returnBook("2022", "18-01-2025");

    // List overdue books 
    std::cout << "\nListing all overdue books (if any):\n";


    // Search for patrons by name
    std::cout << "\nSearching for patron by name 'Emmanuel Ali':\n";
    library.searchPatronByName("Emmanuel Ali");

    // Notify patrons with overdue books (placeholder)
    std::cout << "\nNotifying patrons with overdue books (if implemented):\n";

    // Generate library report (example)
    std::cout << "\nGenerating Library Report (available books):\n";
    library.searchBooksByTitle("Object Oriented Programming"); // Here, we assume this lists available books

    return 0;
}


// code to compile the program: g++ -std=c++11 -I./include main.cpp book_item.cpp patron.cpp library_item.cpp patron_record.cpp  library.cpp -o library_system;

// code to run the program: ./library.exe