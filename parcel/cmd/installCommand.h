#ifndef PARCEL_INSTALL_COMMAND
#define PARCEL_INSTALL_COMMAND

#include "abstractCommand.h"

namespace Parcel {

class InstallCommand : public AbstractCommand {
public:
  InstallCommand();
  ~InstallCommand();

  void execute() override;
  void execute(std::vector<std::string> args) override;
};

}

#endif