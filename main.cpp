#include <iostream>
#include "character.hpp"

int main() 
{
    std::cout << "insert intro here" << std::endl;
    std::cout << "wat is ur name?" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "what is ur age" << std::endl;
    double age;
    std::cin >> age;
    std::cout << "what color is your shell" << std::endl;
    std::string color;
    std::cin >> color;
    Character player(name, color, age);
    std::cout << "welcome to the world " << player.getName() << std::endl;

    bool failure = false;
    while (failure != true)
    {

    }
    if (failure == true)
    {
        std::cout << "You died! Try again!";
    }
    else
    {
        std::cout << "Congratulations.,!";
    }



}


