#pragma once
#include "Entity.h"
#include <string>
#include <stdexcept>
using Double = double;
class Book :
    public Entity
{
private:
    static const StringList attrsTitle;
public:
    String title;
    String ISBN;
    String authorId;
    Double price{};
    Book(String id, String title, String ISBN, String authorId, Double price);
    StringList getAttrs() override;
    StringList getAttrsTitle() override;
    bool setAttrs(const StringList& attrs) override;
};

