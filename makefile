CC=g++

CFLAGS=-c -Wall -std=c++11

INCLUDES=

LDFLAGS=

SOURCES=main.cpp \
include/reader.cpp \
include/config_tree.cpp

OBJECTS=$(SOURCES:.cpp=.o)

EXECUTABLE=b-config.app


all: build $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(INCLUDES) $(LDFLAGS) $(OBJECTS) -o build/$@
	
.cpp.o:
	$(CC) $(INCLUDES) $(CFLAGS) $< -o $@

build:
	@mkdir -p bin

clean:
	rm -rf $(EXECUTABLE) $(OBJECTS)
