#ifndef COURSE_H
#define COURSE_H

typedef enum {
    BEGINNER,
    INTERMEDIATE,
    ADVANCED
} CourseLevel;

typedef struct {
    char first[25];
    char last[25];
} Instructor;

typedef struct {
    char id[20];
    char title[50];
    int credits;
    Instructor instructor;
    CourseLevel level;
    int capacity;
} Course;

#endif