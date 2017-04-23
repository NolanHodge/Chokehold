#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>

#define PDF "pdf"
#define JPG "jpg"
#define PNG "png"
#define JPG "jpg"

class Chokehold
{

    public:
        /* 
         * Constructors
         *
         * */
        Chokehold(){};// nada
        Chokehold(std::string="");
        ~Chokehold();

        /*
         * Grab all files from a server directory specified on the web page
         * using wget, and place them in their respective folder
         *
         * param_in: <string> type of file to extract
         * return:   void
         */
        void getAllOfFileType(std::string="");
    private:
        std::string url;
};
