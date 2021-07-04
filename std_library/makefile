# the compiler: cpp
CC = g++

# compiler flags
# -g adds debugging info to the executable
# -Wall turns on most but not all compiler warnings
CFLAGS = -g -Wall

# build target executable
TARGET = pair

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	$(RM) $(TARGET)
