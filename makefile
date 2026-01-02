CC = gcc
CFLAGS = -Wall -Wextra
TARGET = loganalyzer

SRCS = src/main.c src/analyzer.c src/generator.c
OBJS = $(SRCS:.c=.o)


all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

src/main.o: src/main.c inc/analyzer.h inc/generator.h
src/analyzer.o: src/analyzer.c inc/analyzer.h
src/generator.o: src/generator.c inc/generator.h

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean