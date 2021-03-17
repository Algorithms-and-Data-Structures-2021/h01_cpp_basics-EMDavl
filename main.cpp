#include <iostream>
#include <vector>

#include "author.hpp"
#include "book.hpp"
#include "book_store.hpp"

// 1. константность const и constexpr
// 2. строки в стиле Си и класс std::string
// 3. перечисления и структуры
// 4. указатели и ссылки


int main(int argc, char **argv) {
    const auto bs = new BookStore("BookStore");
    std::cout<< bs->GetSize() << std::endl;
    std::cout<< bs->GetCapacity() << std::endl;
    std::cout<< bs->GetName() << std::endl;
    std::cout<< bs->GetBooks() << std::endl;
    return 0;
}