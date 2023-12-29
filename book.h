#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>

class Book {
private:
    std::string author;
    std::string title;
    std::string publisher;
    int year;
    int pageCount;

public:
    explicit Book(const std::string& a, const std::string& t, const std::string& p, int y, int pc);
    const std::string& getAuthor() const;
    const std::string& getTitle() const;
    const std::string& getPublisher() const;
    int getYear() const;
    int getPageCount() const;
};

#endif