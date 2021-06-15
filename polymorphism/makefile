# the compiler we use
CC = g++

# compiler flags
# -g adds debugging info to the executable
# -Wall turns on most but not all compiler warnings
CFlags = -g -Wall

# the build target executable
TARGET = sample
	
all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	$(RM) $(TARGET)

