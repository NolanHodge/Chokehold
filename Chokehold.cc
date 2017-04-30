#include "Chokehold.hh"

void Chokehold::getAllOfFileType(std::string filetype)
{
    if (filetype == "")
    {
        std::cout << "Enter type of file (pdf, jpg, etc.)" << std::endl;
        std::cin >> filetype;
    }

    std::stringstream wget_string;
    wget_string << "wget -q -A i -P";
    wget_string << filetype;
    wget_string<< " -m -p -E -k -K -np ";
    wget_string << url;

    int ret = system(wget_string.str().c_str());
    if (ret == 0)
    {
        std::cout << "Success!, files have been saved in " << filetype << "/" << url << std::endl;
    }
}

void Chokehold::bruteForceDirectories(std::string dict)
{
    int ret;

    if (dict == "")
    {
        std::cout << "Enter dictionary location: ";
        std::cin >> dict;
    }
    std::ifstream dictfile;
    dictfile.open(dict.c_str());

    std::string line;
    if (dictfile.is_open())
    {
        while (getline(dictfile, line))
        {
            line.erase(std::remove(line.begin(), line.end(), '\''), line.end());
            std::stringstream wget_string;
            wget_string << "wget -q " << url << "/" << line;
            ret = system(wget_string.str().c_str());
            if (ret == 0)
            {
                std::cout << "Found directory: " << line << std::endl;
            }
        }
        dictfile.close();
    }
    else
    {
        std::cout << "Could not open file: " << dict << " Make sure you entered it correctly.\n", dict;
    }
}

void Chokehold::executeCommand(int command)
{
    switch (command)
    {
        case CHOKEHOLD_GET_ALL_OF_FILE_TYPE:
            getAllOfFileType();
            break;

        case CHOKEHOLD_BRUTE_FORCE_DIRECTORIES:
            bruteForceDirectories();
            break;
    }
}
