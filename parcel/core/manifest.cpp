#include <iostream>
#include <fstream>

#include "manifest.h"

namespace Parcel {

Manifest::Manifest(const std::string& lockfilePath) : lockfilePath(lockfilePath) {}

bool Manifest::load() {
  std::ifstream manifest(lockfilePath);
  if (!manifest.is_open()) {
    std::cerr << "[ Error ] Failed to open manifest lockfile." << std::endl;
    return false;
  }

  try {
    manifest >> lockfile;
  } catch (nlohmann::json::parse_error& e) {
    std::cerr << "[ Error ] Failed to parse manifest json." << e.what() << std::endl;
    return false;
  }

  return true;
}

bool Manifest::save() {
  std::ofstream manifest(lockfilePath);
  if (!manifest.is_open()) {
    std::cerr << "[ Error ] Failed to open manifest for writing." << std::endl;
    return false;
  }

  manifest << std::setw(4) << lockfile << std::endl;
  return true;
}

bool Manifest::hasPackage(const std::string& package) const {
  return lockfile.count(package) > 0;
}

Package Manifest::getPackageInfo(const std::string& package) const {
  Package pkg;

  if (lockfile.count(package) > 0) {
    pkg.name = package;
    pkg.version = lockfile[package]["version"];
    pkg.downloadURL = lockfile[package]["downloadURL"];
    pkg.downloadSize = lockfile[package]["downloadSize"];
    pkg.checksum = lockfile[package]["checksum"];
  }

  return pkg;
}

void Manifest::addPackage(const Package& package) {
  lockfile[package.name]["version"] = package.version;
  lockfile[package.name]["downloadURL"] = package.downloadURL;
  lockfile[package.name]["downloadSize"] = package.downloadSize;
  lockfile[package.name]["checksum"] = package.checksum;
}

void Manifest::removePackage(const std::string& package) {
  lockfile.erase(package);
}

}