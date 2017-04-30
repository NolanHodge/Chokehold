#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>

#define PDF "pdf"
#define JPG "jpg"
#define PNG "png"

#define CHOKEHOLD_GET_ALL_OF_FILE_TYPE    1
#define CHOKEHOLD_BRUTE_FORCE_DIRECTORIES 2

class Chokehold
{

    public:
        
        std::string url;
        
        /*
         * Grab all files from a server directory specified on the web page
         * using wget, and place them in their respective folder
         *
         * param_in: <string> type of file to extract
         * return:   void
         */
        void getAllOfFileType(std::string="");
        /*
         * Perform a search for hidden directories on the server
         * using wget. 
         * Search terms are defaulted by files in 'etc/dict/' 
         * User may specify their own dictionary location.
         * 
         * param_in: <string> location of dictionary file
         * return:   void 
         */
        void bruteForceDirectories(std::string="");
        /*
         * Upon receiving console input, execute proper
         * Chokehold command
         *
         * param_in: <int> integer associated with command
         * return:   void
         */
        void executeCommand(int command);
};
