CC = gcc
CFLAGS = -Wall -g

EXECUTABLE = parcel
SOURCES = parcel.c 

$(EXECUTABLE): $(SOURCES)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(SOURCES) 

.PHONY: clean
clean:
	rm -rf $(EXECUTABLE)
