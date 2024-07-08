#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Error: No command specified. Run 'parcel help' for command list.\n");
    fprintf(stderr, "Usage: parcel <command> [options]\n");
  }
}
