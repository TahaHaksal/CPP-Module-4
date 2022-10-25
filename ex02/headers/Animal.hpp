#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		// In protected to prevent any instances of it
		Animal();
		Animal(const Animal &copy);
				
		// Operators
		Animal & operator=(const Animal &assign);

	public:
		// Destructor
		~Animal();
		// Member Function

		virtual void	makeSound( void ) const;

		// Getters And Setters
		void		setType (std::string type);
		std::string	getType() const;
	private:
		std::string _type;
};

#endif