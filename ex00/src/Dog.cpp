#include "../headers/Dog.hpp"

// Constructors
Dog::Dog()
{
	setType("Dog");
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}


// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	(void) assign;
	return *this;
}

// Member Functions
void	Dog::makeSound(void) const
{
	std::cout<<"Woof! ▼・ᴥ・▼"<<std::endl;
}