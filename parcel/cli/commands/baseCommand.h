#ifndef PARCEL_BASE_COMMAND
#define PARCEL_BASE_COMMAND

#include <iostream>
#include <vector>
#include <string>

class BaseCommand {
public:
  void execute();
  void execute(const std::vector<std::string>& args);
  
  void displayUsage() {
    std::cout << "Usage: parcel " << commandName << " " << commandOptions << std::endl;
  };
  void reportError(const std::string errorMessage) {
    std::cerr << "Error: " << errorMessage << std::endl;
  };
protected:
  std::string commandName = "BaseCommand";
  std::string commandOptions = "[options]";
};

#endif
