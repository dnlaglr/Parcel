#ifndef PARCEL_PACKAGE
#define PARCEL_PACKAGE

#include <string>
#include <vector>

class Package {
public:
  void fetchPackage();
  bool installPackage();
  bool uninstallPackage();
  void printInfo();

private:
  std::string name;
  std::string version;
  std::string downloadURL;
  std::uint64_t downloadSize;
  std::string checksum;
  bool isInstalled;

  std::vector<std::string> dependencies;
};

#endif
