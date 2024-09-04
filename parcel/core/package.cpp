#include <iostream>
#include <string>
#include <vector>

#include "package.h"

void Package::printInfo() {
  std::cout << Package::name << " <" << Package::version << ">  - [" << Package::downloadSize << "]" << std::endl;
}
