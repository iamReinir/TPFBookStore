#include "Entity.h"

Entity::Entity(String id)
{
	this->id = id;
}

const String Entity::getID() const
{
	return id;
}

bool Entity::operator==(const Entity& operant)
{
	return this->id == operant.getID();
}
