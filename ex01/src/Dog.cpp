#include "../headers/Dog.hpp"

// Constructors
Dog::Dog()
{
	setType("Dog");
	_dogBrain = new Brain();
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	setType("Cat");
	_dogBrain = new Brain();
	*_dogBrain = *(copy._dogBrain);
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}


// Destructor
Dog::~Dog()
{
	delete _dogBrain;
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	setType("Cat");
	_dogBrain = new Brain();
	*_dogBrain = *(assign._dogBrain);
	return *this;
}

// Member Functions
void	Dog::makeSound(void) const
{
	std::cout<<"Woof! ▼・ᴥ・▼"<<std::endl;
}