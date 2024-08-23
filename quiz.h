#ifndef QUIZ_H
#define QUIZ_H

#include "user.h"

typedef struct 
{
    char question[256];
    char options[4][100];
    char correctOption;
} 
Question;

void attemptQuiz(User *user);

#endif
