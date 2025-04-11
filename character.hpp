#include <string>



class Character {
    public:
    Character(){
        char_name_ = "";
        color_ = "";
        age_ = 0;
    }
    Character(std::string name, std::string color, double age)
    {
        char_name_ = name;
        color_ = color;
        age_ = age;
    }

    void setName(std::string name)
    { char_name_ = name; }

    std::string getName()
    { return char_name_; }

    void setAge(double age)
    { age_ = age;}

    double getAge()
    { return age_; }

    void setColor(std::string color)
    { color_ = color; }

    std::string getColor()
    { return color_; }

    void setItem(std::string item)
    { item_ = item; }

    std::string getItem()
    { return item_; }

    private:
    std::string char_name_;
    std::string color_;
    double age_;
    std::string item_;
};