#include "Book.h"

const StringList Book::attrsTitle{
	"Book id",
	"Title",
	"ISBN",
	"Author id",
	"Price"
};

Book::Book(String id, String title, String ISBN, String authorId, Double price) 
	: Entity(id), title(title), ISBN{ ISBN }, authorId(authorId), price(price)
{
}

StringList Book::getAttrs()
{
	return StringList{this->getID(), title, ISBN, authorId, std::to_string(price)};
}

StringList Book::getAttrsTitle() {
	return attrsTitle;
}

bool Book::setAttrs(const StringList& attrs)
{
	title = attrs.at(1);
	ISBN = attrs.at(2);
	authorId = attrs.at(3);
	try {
		price = std::stod(attrs.at(3));
	}
	catch (std::invalid_argument ex)
	{
		return false;
	}
	return (attrs.at(0).empty());
}
