#ifndef PARCEL_ABSTRACT_COMMAND
#define PARCEL_ABSTRACT_COMMAND

#include <string>
#include <vector>

namespace Parcel {

class AbstractCommand {
public:
  AbstractCommand() {};
  virtual ~AbstractCommand() {};

  virtual void execute() = 0;
  virtual void execute(std::vector<std::string> args) = 0;

protected:
  std::string name;
  std::string description;
};

}

#endif