#include "../headers/Animal.hpp"

// Constructors
Animal::Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}


// Destructor
Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}


// Operators
Animal & Animal::operator=(const Animal &assign)
{
	(void) assign;
	return *this;
}

// Member Functions

void	Animal::makeSound( void ) const
{		
	std::cout<<"*Tumbleweed tumling*"<<std::endl;
}

void		Animal::setType (std::string type)
{
	_type = type;
}

std::string	Animal::getType() const
{
	return _type;
}