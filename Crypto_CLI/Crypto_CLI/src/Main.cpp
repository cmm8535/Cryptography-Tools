#include <map>
#include <iostream>
#include <iomanip>
#include "buildinfo.h"

#define MAX_CMD_SIZE 200

static enum commands
{
   INVALID,
   INFO,
   EXIT
};

static std::map<std::string, commands> strToCommandMap;

static void getBuildInfo()
{
   std::cout << "Build Timestamp: " << timestamp << std::endl << std::endl;
}

static void invalidCmd()
{
   std::cout << "Invalid command. Type \"help\" to see valid options" << std::endl << std::endl;
}

int main(int, char**)
{
   // Init

   // Make char* to command map
   strToCommandMap["info"] = commands::INFO;
   strToCommandMap["exit"] = commands::EXIT;

   std::string cmd;

   // Runtime Loop
   while (1)
   {
      // Get Command Input
      std::cout << "Main > ";
      std::cin >> cmd;
      std::cout << std::endl;

      // Running The Given Command
      switch (strToCommandMap[cmd])
      {
         case commands::INFO:
            getBuildInfo();
            break;
         case commands::EXIT:
            return 0;
            break;
         default:
            invalidCmd();
            break;
      }
   }
}