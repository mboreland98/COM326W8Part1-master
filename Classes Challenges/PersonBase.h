#pragma once

#include <string>
#include <iostream>

class PersonBase
{

private: 
	std::string name_;
	std::string email_;

public: 
	PersonBase();
	PersonBase(std::string name, std::string email);

	~PersonBase();

	void SetName(std::string name);
	std::string GetName() const;

	void SetEmail() const;

	void SetEmail(std::string email);
	std::string GetEmail() const;

	void ToString() const;

};