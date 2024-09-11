#ifndef PARCEL_PARCEL
#define PARCEL_PARCEL

#include <memory>

#include "cmd/abstractCommand.h"
#include "core/manifest.h"

namespace Parcel {

class Parcel {
public:
  Parcel() {
    manifest = std::make_unique<Manifest>("./manifest.json");
  }
  ~Parcel() {};

  std::unique_ptr<AbstractCommand> command;
  std::unique_ptr<Manifest> manifest;
};

}

#endif