#include "Chokehold.hh"

Chokehold::Chokehold(std::string URL)
{
  url = URL;
}

Chokehold::~Chokehold()
{
    // nada
}

void Chokehold::getAllOfFileType(std::string filetype)
{
    std::stringstream wget_string;
    wget_string << "wget -A pdf i -P ";
    wget_string << filetype;
    wget_string<< " -m -p -E -k -K -np ";
    wget_string << url;

    system(wget_string.str().c_str());
}

int main()
{
    std::cout << "WARNING! \nThis program is to be used on your own server, and " \
        "your own network! \nThis software was not created for malicous intent " \
        "or use. \nThe creaters of this software omit any responsibility for misuse." \
        "\n\n"; 
    
    std::string input_url;
    std::cout << "Enter url: ";
    std::cin >> input_url;

    //@TODO Intended for debug use only
    if (input_url.size() < 2)
    {
        input_url = "localhost:9999";
    }

    Chokehold ch(input_url);
    ch.getAllOfFileType(PDF);
    ch.getAllOfFileType(JPG);
}
