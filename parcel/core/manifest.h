#ifndef PARCEL_MANIFEST
#define PARCEL_MANIFEST

#include <string>
#include <vector>
#include <unordered_map>

#include "package.h"
#include "json.hpp"

namespace Parcel {

class Manifest {
public:
  Manifest(const std::string& lockfilePath);

  bool load();
  bool save();
  bool hasPackage(const std::string& package) const;
  Package getPackageInfo(const std::string& package) const;

  void addPackage(const Package& package);
  void removePackage(const std::string& package);

private:
  std::string lockfilePath;
  nlohmann::json lockfile;
};

}

#endif