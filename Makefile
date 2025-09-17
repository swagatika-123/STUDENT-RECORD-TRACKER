CC = g++
CFLAGS = -std=c++11 -Wall
SRC = src/main.cpp src/student.cpp src/utils.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = student_record_management

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)