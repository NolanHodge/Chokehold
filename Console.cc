#include "Console.hh"
Console::Console()
{
    DisplayWarning();
    std::cout << "Enter url of server: ";
    std::cin >> url;

    //@TODO Intended for debug use only
    if (url.size() < 2)
    {
        url = "192.168.0.14:9999";
    }

    std::stringstream ping_command;
    ping_command << "ping -c 1 " ;
    ping_command << url;

    int ret = system (ping_command.str().c_str());

    if (ret != 0)
    {
        std::string reply;
        std::cout << "Cannot verify server exists via ICMP (perhaps blocking ping requests)" << std::endl;
        std::cout << "Continue anyway? (y/n)"                      << std::endl;
        std::cin  >> reply; 
        if (reply != "y")
        {
            exit(1);
        }
    }
}

void Console::DisplayWarning()
{
    std::cout << "WARNING!" << std::endl;
    std::cout << "This program is to be used on your own server, and your own network! " << std::endl;
    std::cout << "This software was not created for malicous intent " << std::endl;
    std::cout << "The creaters of this software omit any responsibility for misuse." << std::endl << std::endl;
}

void Console::ShowOptions()
{
    system("clear");
    std::cout << "------------------------------"      << std::endl;
    std::cout << "Chokehold"                           << std::endl;
    std::cout << "------------------------------"      << std::endl;
    std::cout << "Options"                             << std::endl;
    std::cout << "(1) Get all listed files"            << std::endl;
    std::cout << "(2) Search for unlisted directories" << std::endl << std::endl;
}

int Console::GetInput()
{
    int input;
    ShowOptions();
    std::cout << "Enter Option: ";
    std::cin >> input;
    if (input > 5 || input < 0)
    {
        std::cout << "Invalid Option.." << std::endl;
        return 0;
    }
}

std::string Console::GetUrl()
{
    return url;
}
