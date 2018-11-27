

#include "PersonBase.h"

//getters and setters 


void PersonBase::SetName(std::string name)
{
	name_ = name;
}
std::string PersonBase::GetName() const {
	return name_;
}


void PersonBase::SetEmail(std::string email) 
{
	email_ = email ;
}
std::string PersonBase::GetEmail() const {
	return email_;
}

void PersonBase::ToString() const {
	std::string output = name_ + " " + email_ + " " + "\n";

}