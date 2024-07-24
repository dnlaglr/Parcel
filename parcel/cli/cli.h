#ifndef PARCEL_CLI
#define PARCEL_CLI

#include "commands/commands.h"

typedef enum {
  PARSE_SUCCESS,
  PARSE_FAILURE,
  PARSE_UNEXPECTED
} ParseCode;

void parseCommandArgs(int argc, char *argv[]);

#endif
