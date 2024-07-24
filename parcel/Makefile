CC = gcc
CFLAGS = -Wall -g

EXECUTABLE = parcel
SOURCES = parcel.c cli/cli.c cli/commands/helpCommand.c
INCLUDE = -I cli -I cli/commands

$(EXECUTABLE): $(SOURCES)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(SOURCES) $(INCLUDE)

.PHONY: clean
clean:
	rm -rf $(EXECUTABLE)
