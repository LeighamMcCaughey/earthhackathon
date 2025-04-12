#include <iostream>
#include "character.hpp"

int main() 
{
    bool failure = false;
    std::string name;
    
    double age;
    
    std::string color;

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

    std::cin >> name;
    std::cout << "(Your age?)" << std::endl;
    std::cin >> age;
    std::cout << "(Shell Color?)" << std::endl;
    std::cin >> color;
    std::cout << "(Nice! Back to the story!)" << std::endl;

    while (failure != true)
    {
        std::cout << "(Choose one of the given options! Just type in 1 or 2!)" << std::endl;
        std::cout << "Option 1: Respond" << std::endl;
        std::cout << "Option 2: Leave" << std::endl;
        std::cout << "==========================================" << std::endl;
        int option_selection;
        std::cin >> option_selection;
        if (option_selection == 1)
        {
            std::cout << "*You can’t wait anymore and spring into action*" << std::endl;
            std::cout << name << ": “I can help! I have my own garden, I can take you there!”" << std::endl;
            failure = false;
        }
        else if (option_selection == 2)
        {
            std::cout << "*You leave and never see the boy again. The entire world explodes. THE END." >> std::endl;
            failure = true;
            break;
        }
        std::cout << "Dave: “WOAH!! A TALKING SNAIL??”" << std::endl;
        std::cout << "(Choose one of the given options! Just type in 1 or 2!)" << std::endl;
        std::cout << "Option 1: The funny option" << std::endl;
        std::cout << "====================================" << std::endl;
        std::cout << "Option 2: Calm response" << std::endl;
        if (option_selection == 1)
        {
            std::cout << "“YES IT IS I " << name << ", PRAISE ME AS I WILL HELP YOU AND BE YOUR GUIDE.”" << std::endl;
        }
        else if (option_selection = 2)
        {
            std::cout << "“Yep! I am a talking snail! My name is " << name << " And I am here to help you with your last minute goal!”" << std::endl;
        }
        std::cout << "“You take Dave to your garden eager to help Dave. Dave is very weirded out by the whole taking snail, but is amused by your hat and I think that’s the most important part.”" << std::endl;


        std::cout << "“Dave: This is great! I can make so many good ideas, kind of overwhelming however. What should I make??" << std::endl;
        
        std::cout << "OPTIONS :\n Salad\n Cucumber Salad\n Veggie Pasta\n Cookies\n Cheese\n";
        
        std::string item = "";
        
        
        while  !(item == "a"|| item == "A" || item == "b" || item == 'B' || item == "c" || item == "C") {
        std::cin << item;
        
        if (item == "a" || item == "A" || item == "b" || item == "B" || item == "c" || item == "C") {
            std:: cout << "Dave: Wow! That’s exactly what I need for my potluck tomorrow!" << std::endl;
        
        else 
            std::cout << "Dave: Uhm.. I don’t think this is exactly what I need. How about something else?" << std::endl;
        }
        
        std::cout << player name << ": Yes! Take as much as you want, but be careful.. There is a Toad near here, his name is Gavril the Toad. 
                                    He likes to take all the food in the garden for himself." << std::endl;
        
        std::cout << player name << ": Gavril loves global warming and processed food, so he doesn’t want ANYONE taking any fresh food." << std::endl;
        
    }
    if (failure == true)
    {
        std::cout << "You died! Try again! ";
    }
    else
    {
        std::cout << "Congratulations.,!";
    }



}


