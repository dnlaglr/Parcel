#include <stdio.h>
#include <string.h>

#include "cli.h"
#include "commands/commands.h"

void parseCommandArgs(int argc, char *argv[]) {
  if (strcmp(argv[1], "help") == 0) {
    helpCommand();
  }
}
