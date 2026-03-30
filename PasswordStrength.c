#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    int i = 0;

    int hasUpper = 0;
    int hasLower = 0;
    int hasDigit = 0;

    printf("Enter password: ");
    scanf("%s", password);

    int length = strlen(password);

    while (i < length) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            hasUpper = 1;
        }
        else if (password[i] >= 'a' && password[i] <= 'z') {
            hasLower = 1;
        }
        else if (password[i] >= '0' && password[i] <= '9') {
            hasDigit = 1;
        }

        i = i + 1;
    }

    printf("\nPassword length: %d\n", length);

    if (length < 8) {
        printf("Strength: Weak (too short)\n");
    }
    else if (hasUpper && hasLower && hasDigit) {
        printf("Strength: Strong\n");
    }
    else if ((hasUpper || hasLower) && hasDigit) {
        printf("Strength: Medium\n");
    }
    else {
        printf("Strength: Weak\n");
    }

    return 0;
}