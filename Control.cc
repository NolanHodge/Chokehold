#include <iostream>

#include "Console.hh"
#include "Chokehold.hh"

int main()
{
    int command = 0;
    std::string continue_input = "y";

    Chokehold chokehold;
    Console console;
    
    chokehold.url = console.GetUrl();

    while (continue_input == "y")
    {
        command = console.GetInput();
        chokehold.executeCommand(command);
        std::cout << "Continue? (y/n)" << std::endl;
        std::cin >> continue_input;
    }
}
