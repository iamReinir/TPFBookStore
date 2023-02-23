#pragma once
#include"Entity.h"
class Author
	: public Entity
{
	static const StringList attrsTitle{
		"Author id",
		"Author name"
	};
public:
	String name;
	Author(String id, String name) :
		Entity(id), name{ name } {}
	StringList getAttrs() override;
	StringList getAttrsTitle() override;
	bool setAttrs(const StringList& attrs) override;
};

