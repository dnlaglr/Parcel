#include <iostream>
#include <string>

#include "commands/commands.h"

int main(int argc, char* argv[]) {
  if (argc < 2) { std::cout << "Error: You must specify a command." << std::endl; }

  if (std::string(argv[1]) == "help") {
    HelpCommand cmd;
    cmd.execute();
  } else if (std::string(argv[1]) == "install") {
    InstallCommand cmd;
    
    std::vector<std::string> args(argv + 2, argv + argc);

    cmd.execute(args);
  }
}
