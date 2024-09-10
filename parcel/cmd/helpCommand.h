#ifndef PARCEL_HELP_COMMAND
#define PARCEL_HELP_COMMAND

#include "abstractCommand.h"

namespace Parcel {

class HelpCommand : public AbstractCommand {
public:
  HelpCommand();
  ~HelpCommand();

  void execute() override;
  void execute(std::vector<std::string> args) override;
};

}

#endif