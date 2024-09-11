#ifndef PARCEL_PACKAGE
#define PARCEL_PACKAGE

#include <string>

namespace Parcel {

struct Package {
  std::string name;
  std::string version;
  std::string downloadURL;
  std::uint64_t downloadSize;
  std::uint32_t checksum;
};

}

#endif