#include "../headers/Cat.hpp"

// Constructors
Cat::Cat()
{
	setType("Cat");
	_catBrain = new Brain();
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	setType("Cat");
	_catBrain = new Brain();
	*_catBrain = *(copy._catBrain);
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	delete _catBrain;
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	setType("Cat");
	_catBrain = new Brain();
	*_catBrain = *(assign._catBrain);
	return *this;
}

// Member Functions

void	Cat::makeSound(void) const
{
	std::cout<<"Meow. =^._.^= ∫."<<std::endl;
}