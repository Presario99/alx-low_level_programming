#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char *generate_random_password() {
    static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));

    srand(time(NULL));
    
    int i;

    for (i = 0; i < PASSWORD_LENGTH; i++) {
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

