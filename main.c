#include <stdio.h>
#include "course.h"
#include <math.h>

int main() {
    int choice = -1;   // initialized so it never holds garbage / инициализирована, чтобы не было мусора

    do {
        printf("\n===== COURSE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Course\n");
        printf("2. Find Course\n");