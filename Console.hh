#include <iostream>
#include <sstream>
#include <stdlib.h>

class Console
{
    public: 
        Console();
        void DisplayWarning();
        void ShowOptions();
        int GetInput();
        std::string GetUrl();

    private:
        std::string url;
};
