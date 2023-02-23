#pragma once

#include<string>
#include<vector>

using String = std::string;
using StringList = std::vector<String>;

class Entity
{
private:
	String id;
public:
	Entity() = delete;
	Entity(String id);
	const String getID() const;
	bool operator==(const Entity& operant);
	//virtual Entity operator=(Entity&& target) = 0;
	//virtual Entity operator=(Entity& target) = 0;
	virtual StringList getAttrs() = 0;
	virtual StringList getAttrsTitle() = 0;
	virtual bool setAttrs(const StringList& attrs) = 0;
};

