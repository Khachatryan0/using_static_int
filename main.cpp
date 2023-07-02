#include <iostream>
#include <string>
#include "crow.cpp"
#include "snake.cpp"
int main (int argc, char** argv)
{
    Animal* Animal1 = new Animal;
    Animal* Birds1 = new Birds;
    Animal* Reptiles1 = new Reptiles;
    Animal* Snake1 = new Snake;
    Animal* Crow1 = new Crow; 
    std :: cout << Crow1->get_name() << std :: endl;
    std :: cout << Crow1->get_a_latin_name() << std :: endl;
    std :: cout << Crow1->get_a_note() << std :: endl;
    delete Animal1;
    delete Reptiles1;
    delete Birds1;
    delete Snake1;
    delete Crow1;
    std :: cout << "The class animal has been created  " << Animal:: count << " times" << std :: endl;
    return 0;
}