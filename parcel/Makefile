CC = g++
CFLAGS = -Wall -g

EXECUTABLE = parcel
SOURCES = cli/cli.cpp core/*.cpp server/server.cpp server/api/*.cpp
INCLUDE = -I cli/commands/ -I core/ -I server/

$(EXECUTABLE): $(SOURCES)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(SOURCES) $(INCLUDE)

.PHONY: clean
clean:
	rm -rf $(EXECUTABLE)
