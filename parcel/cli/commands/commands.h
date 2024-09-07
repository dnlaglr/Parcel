#ifndef PARCEL_COMMANDS
#define PARCEL_COMMANDS

#include <iostream>
#include <vector>
#include <string>

class BaseCommand {
public:
  BaseCommand() { 
    commandName = "BaseCommand";
    commandOptions = "[options]";
  }

  void execute();
  void execute(const std::vector<std::string>& args);
  
  void displayUsage() {
    std::cout << "Usage: parcel " << commandName << " " << commandOptions << std::endl;
  };
  void reportError(const std::string errorMessage) {
    std::cerr << "Error: " << errorMessage << std::endl;
  };
protected:
  std::string commandName;
  std::string commandOptions;
};

class HelpCommand : public BaseCommand {
public:
  HelpCommand() {
    commandName = "help";
    commandOptions = "<package>";
  }

  void execute();
};

class InstallCommand : public BaseCommand {
public:
  InstallCommand() {
    commandName = "install";
    commandOptions = "<package>";
  }

  void execute();
  void execute(const std::vector<std::string>& args);
};

#endif
