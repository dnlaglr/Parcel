CXX := g++
CXXFLAGS := -Wall -Wextra -g -std=c++17

BINPATH := bin
OBJPATH := $(BINPATH)/objs
SRCPATH := cli/*.cpp cmd/*.cpp
INCPATH := -I cmd/

SOURCES := $(wildcard $(SRCPATH))
OBJECTS := $(patsubst %.cpp, $(OBJPATH)/%.o, $(notdir $(SOURCES)))

EXECUTABLE := $(BINPATH)/parcel

all: $(EXECUTABLE)

debug: CXXFLAGS += -DPARCEL_DEBUG
debug: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@mkdir -p $(BINPATH)
	$(CXX) $(CXXFLAGS) $(INCPATH) $^ -o $@

$(OBJPATH)/%.o: cli/%.cpp
	@mkdir -p $(OBJPATH)
	$(CXX) $(CXXFLAGS) $(INCPATH) -c $< -o $@

$(OBJPATH)/%.o: cmd/%.cpp
	@mkdir -p $(OBJPATH)
	$(CXX) $(CXXFLAGS) $(INCPATH) -c $< -o $@

clean:
	@rm -rf $(BINPATH)

.PHONY: clean all debug
