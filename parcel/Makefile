CC := g++
CFLAGS := -Wall -g -Wextra -std=c++17

BINPATH := bin
OBJPATH := ${BINPATH}/objs
SRCPATH := cli/*.cpp core/*.cpp server/*.cpp
INCPATH := -I core/ -I cli/commands/ -I server/

SOURCES := $(wildcard $(SRCPATH))
OBJECTS := $(patsubst %.cpp, $(OBJPATH)/%.o, $(notdir $(SOURCES)))

EXECUTABLE := $(BINPATH)/parcel

$(EXECUTABLE): $(OBJECTS)
	@mkdir -p $(BINPATH)
	$(CC) $(CFLAGS) $(INCPATH) $^ -o $@

$(OBJPATH)/%.o: cli/%.cpp
	@mkdir -p $(OBJPATH)
	$(CC) $(CFLAGS) $(INCPATH) -c $< -o $@

$(OBJPATH)/%.o: core/%.cpp
	@mkdir -p $(OBJPATH)
	$(CC) $(CFLAGS) $(INCPATH) -c $< -o $@

$(OBJPATH)/%.o: server/%.cpp
	@mkdir -p $(OBJPATH)
	$(CC) $(CFLAGS) $(INCPATH) -c $< -o $@

clean:
	@rm -rf $(BINPATH)

.PHONY: clean
