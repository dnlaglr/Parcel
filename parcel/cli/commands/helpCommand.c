#include <stdio.h>
#include <stdlib.h>

#include "commands.h"

ExitCode helpCommand() {
  fprintf(stdout, 
    "Parcel - C/C++ Package Manager\n"
    "\n"
    "help - Gives general help information about all available commands\n"
    "install <package> - Attempts to install the specified package\n"
    "list - Lists all installed packages in the current project\n"
    "update - Attempts to update all installed packages to latest versions\n"
    "update <package> - Attempts to update the specified package to latest version\n"
    "uninstall <package> - Attempts to uninstall the specified package from current project\n"
    "[command] -help - Gives help information about a specific command\n"
  );

  return EXIT_SUCCESS;
}
