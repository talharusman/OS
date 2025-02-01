# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Targets
TARGET = main
SOURCES = main.cpp LetterCount.cpp WordCount.cpp LineCount.cpp
HEADERS = LetterCount.h WordCount.h LineCount.h
OBJECTS = $(SOURCES:.cpp=.o)

# Default rule
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJECTS)

run:
	./main

