#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"

int main()
{
    Animal *animal_arr[10];

    for (int i = 0; i < 5; i++)
        animal_arr[i] = new Cat();
    for (int i = 5; i < 10; i++)
        animal_arr[i] = new Dog();
    for (int i = 0; i < 10; i++)
        animal_arr[i]->makeSound();
    for (int i = 0; i < 10; i++)
        delete animal_arr[i];
    Cat x;
    Cat y(x);
}
