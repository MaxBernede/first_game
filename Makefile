# Makefile for an SFML C++ project with a single source file (main.cpp)

# Compiler
CXX := g++

# Compiler flags
CXXFLAGS := -std=c++11 -Wall $(shell pkg-config --cflags sfml-all)

# Executable name
TARGET := exe

# Source files
SOURCES :=	main.cpp \

# Object files
OBJECTS := $(SOURCES:.cpp=.o)

# SFML flags and libraries
SFML_LIBS := -lsfml-graphics -lsfml-window -lsfml-system

# Build rule
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(SFML_LIBS)

# Clean rule
clean:
	rm -f $(OBJECTS) $(TARGET)
