#include "Author.h"

StringList Author::getAttrs()
{
    return StringList{
        getID(),
        name
    };
}

StringList Author::getAttrsTitle()
{
    return attrsTitle;
}

bool Author::setAttrs(const StringList& attrs)
{
    name = attrs.at(1);
    return attrs.at(0).empty();
}
