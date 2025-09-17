#include "utils.h"
#include <iostream>
#include <limits>

bool validateID(int id) {
    return id > 0;
}

bool validateMarks(int marks) {
    return marks >= 0 && marks <= 100;
}

void clearInputBuffer() {
    std::cin.clear(); // Clear the error flag
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
}