#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(const Animal &copy);
		
		// Destructor
		virtual ~Animal();
		
		// Operators
		Animal & operator=(const Animal &assign);
		
		// Member Function

		virtual void	makeSound( void ) const;

		// Getters And Setters
		void		setType (std::string type);
		std::string	getType() const;
	private:
		std::string _type;
};

#endif