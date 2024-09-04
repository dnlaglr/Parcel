#ifndef PARCEL_HELP_COMMAND
#define PARCEL_HELP_COMMAND

#include <iostream>
#include <string>

#include "baseCommand.h"

class HelpCommand : public BaseCommand {
public:
  void execute() {
    std::cout << "Parcel - C/C++ Package Manager\n\n" 
      << "help - Gives general help information about all available commands\n"
      << "install <package> - Attemps to install the specified package\n"
      << "list - Lists all installed packages in the current project\n"
      << "update - Attempts to update all installed packages to their latest versions\n"
      << "update <package> - Attempts to update the specified package to latest version\n"
      << "uninstall <package> - Attempts to uninstall the specified package from current project\n"
      << "[command] help - Gives help information about a specific command\n" << 
    std::endl;
  }

private:
  std::string commandName = "help";
  std::string commandOptions = "";
};

#endif
