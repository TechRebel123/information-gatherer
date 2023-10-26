#include <iostream>

int main()
{
    std::string name, colour, food, drink, subject, combination;
    std::cout << "What is your name? " << "\n";
    std::getline(std::cin >> std::ws, name); //to put spaces text
    int age, birth_year, current_year;
    std::cout << "Enter the year you were born: " << "\n";
    std::cin >> birth_year;
    std::cout << "Enter the current year: " << "\n";
    std::cin >> current_year;
    age = current_year - birth_year;
    std::cout << "Which is your favorite colour? " << "\n";
    std::getline(std::cin >> std::ws, colour);
    std::cout << "Which is you favorite food? " << "\n";
    std::getline(std::cin >> std::ws, food);
    std::cout << "And what kind of drink do you prefer? " << "\n";
    std::getline(std::cin >> std::ws, drink);
    if (age>16 && age<22)
    {
        std::cout << "Which is your favorite comnination in college? " << "\n";
        std::getline(std::cin >> std::ws, combination);
    }
    if (age<16)
    {
        std::cout << "Which is your favorite subject? " << "\n";
        std::getline(std::cin >> std::ws, subject);
    }
    if (age>23)
    {
        std::cout << "Which was your favorite combination in college? " << "\n";
        std::getline(std::cin >> std::ws, combination);
    }

    std::cout << "-----------------------------------------------------------------------------";
    std::cout << "\n" << "This is all about you: " <<"\n";
    std::cout << "You are " << name <<"\n";
    std::cout << "Your are " << age << " years old" <<"\n";
    std::cout << "Your favorite colour is " << colour <<"\n";
    std::cout << "Your favorite food is " << food <<"\n";
    std::cout << "Your favorite drink is " << drink <<"\n";
    std::cout << "Your favorite subject is " << subject <<"\n";
    std::cout << "Your favorite combination is " << combination <<"\n";
    std::cout << "-----------------------------------------------------------------------------";

}