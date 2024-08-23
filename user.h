#ifndef USER_H
#define USER_H

typedef struct 
{
    char username[50];
    char password[50];
    int scores[10];
} 
User;

void registerUser();
int loginUser(User *user);
void viewScores(User user);

#endif
