#pragma once
#include"Book.h"
#include<list>
class BookList
{
	std::list<Book> books;
public:
	bool add(Book x);
	
};

