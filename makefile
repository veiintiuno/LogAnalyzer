CC = gcc
CFLAGS = -Wall -Wextra
TARGET = loganalyzer

all: $(TARGET)

$(TARGET): src/main.c src/analyzer.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(TARGET)

.PHONY: all clean