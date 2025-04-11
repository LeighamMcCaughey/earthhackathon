#include <iostream>
#include "character.hpp"

int main() 
{
    Character player();
    std::cout << "*You are sitting on a log, watching a boy your curiosity get’s the better of you*" << std::endl;
    std::cout << "Little Boy: Sitting looking down playing with a stick" << std::endl;
    std::cout << "*Suddenly a little girl comes up to him*" << std::endl;
    std::cout << "Little Girl: “Hey Dave, are you ready for the potluck at school tomorrow”" << std::endl;
    std::cout << "Dave: “Oh yeah Bella! Everything is made and ready haha..”" << std::endl;
    std::cout << "Bella: “I can’t wait, I’m so excited! What did you make??”" << std::endl;
    std::cout << "Dave: “UH, it’s a surprise! You have to wait for tomorrow!”" << std::endl;
    std::cout << "Bella: “Great, I’ll see you then!”" << std::endl;
    std::cout << "*Bella runs off home as her mother calls her, saying her goodbyes before she goes*" << std::endl;
    std::cout << "Dave: *picking up a stick and turns to you, the snail* “What am I going to do?? I didn’t make anything for the potluck tomorrow! Bella and all my other friends are going to be so disappointed in me..”" << std::endl;
    std::cout << "(Wait, what's the name of the snail?)" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "(Your age?)" << std::endl;
    double age;
    std::cin >> age;
    std::cout << "(Shell Color?)" << std::endl;
    std::string color;
    std::cin >> color;
    std::cout << "(Nice!)" << name << std::endl;

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


