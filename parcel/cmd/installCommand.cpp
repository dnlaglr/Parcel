#include <iostream>

#include "installCommand.h"

namespace Parcel {

InstallCommand::InstallCommand() {
  name = "install";
  description = "Installs the specified package(s) along with its dependencies.";
}

InstallCommand::~InstallCommand() {}

void InstallCommand::execute() {
  // TODO: When install is run without arguments it should attempt to redownload all packages in lockfile.
}

void InstallCommand::execute(std::vector<std::string> args) {
  for (int i = 0; i < args.size(); i++) {
    std::cout << "[ Info ] Installing " << args[i] << std::endl;
  }
}

}