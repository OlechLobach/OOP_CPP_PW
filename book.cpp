#include "book.h"

Book::Book(const std::string& a, const std::string& t, const std::string& p, int y, int pc)
    : author(a), title(t), publisher(p), year(y), pageCount(pc) {}

const std::string& Book::getAuthor() const {
    return author;
}

const std::string& Book::getTitle() const {
    return title;
}

const std::string& Book::getPublisher() const {
    return publisher;
}

int Book::getYear() const {
    return year;
}

int Book::getPageCount() const {
    return pageCount;
}