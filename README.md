# OnlineQuizSystem
in C language

This project is an Online Quiz System implemented in C. Users can register, log in, attempt quizzes, view their scores, and check the leaderboard. Admins can add, view, edit, and delete quiz questions.

## Features
- User Registration and Login
- Quiz Attempt
- Score Viewing
- Leaderboard
- Admin Panel for Quiz Management

## How to Compile

cd path\to\your\OnlineQuizSystem
gcc -o quiz_system src/main.c src/user.c src/quiz.c src/admin.c src/leaderboard.c -I include/
./quiz_system.exe
