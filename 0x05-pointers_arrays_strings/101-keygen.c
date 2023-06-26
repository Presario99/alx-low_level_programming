#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate random password for the program 101-crackme
 * Return: Always 0
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char *generate_random_password() {
    static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));

    srand(time(NULL));

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[PASSWORD_LENGTH] = '\0';

    return password;
}

int main() {
    char *password = generate_random_password();

    printf("Generated password: %s\n", password);

    free(password);

    return 0;
}

