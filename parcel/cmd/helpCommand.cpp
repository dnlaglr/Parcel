#include <iostream>

#include "helpCommand.h"

namespace Parcel {

HelpCommand::HelpCommand() {
  name = "help";
  description = "Displays a list of available commands or detailed help information for a specified package.";
}

HelpCommand::~HelpCommand() {};

void HelpCommand::execute() {
  std::cout << "\nParcel - C/C++ Package Manager\n\n" 
    << "help - Gives general help information about all available commands\n"
    << "install <package> - Attemps to install the specified package\n"
    << "list - Lists all installed packages in the current project\n"
    << "update - Attempts to update all installed packages to their latest versions\n"
    << "update <package> - Attempts to update the specified package to latest version\n"
    << "uninstall <package> - Attempts to uninstall the specified package from current project\n"
    << "[command] help - Gives help information about a specific command\n" << 
  std::endl;
}

void HelpCommand::execute(std::vector<std::string> args) {
  std::cout << "[ Info ] Displaying help information for " << args[0] << std::endl;
}

}