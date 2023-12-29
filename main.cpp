
#include "book.h"

int main() {
    const int numOfBooks = 2;
    Book books[numOfBooks] = {
        Book("Author1", "Title1", "Publisher1", 2000, 300),
        Book("Author2", "Title2", "Publisher2", 2005, 250)
    };
    

    std::string searchAuthor = "Author1";
    std::string searchPublisher = "Publisher1";
    int searchYear = 2003;

    std::cout << "Books by author " << searchAuthor << ":\n";
    for (int i = 0; i < numOfBooks; ++i) {
        if (books[i].getAuthor() == searchAuthor) {
            std::cout << "Title: " << books[i].getTitle() << ", Year: " << books[i].getYear() << "\n";
        }
    }

    std::cout << "\nBooks by publisher " << searchPublisher << ":\n";
    for (int i = 0; i < numOfBooks; ++i) {
        if (books[i].getPublisher() == searchPublisher) {
            std::cout << "Title: " << books[i].getTitle() << ", Year: " << books[i].getYear() << "\n";
        }
    }

    std::cout << "\nBooks published after " << searchYear << ":\n";
    for (int i = 0; i < numOfBooks; ++i) {
        if (books[i].getYear() > searchYear) {
            std::cout << "Title: " << books[i].getTitle() << ", Year: " << books[i].getYear() << "\n";
        }
    }

    return 0;
}