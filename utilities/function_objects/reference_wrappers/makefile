# the compiler : cpp
CC = g++

# compiler flags
# -g adds debugging info to the executable
# -Wall turns on most but not all compiler warnings
CFLAGS = -g -Wall -pthread

# build target executable
TARGET = ref_and_cref

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	$(RM) $(TARGET)
