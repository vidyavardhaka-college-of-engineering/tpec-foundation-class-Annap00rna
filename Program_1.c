#include <stdio.h>
#include <ctype.h>

int check_character(char c) {
    if (isupper(c)) {
        return 1;
    } else if (islower(c)) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    char input_char;
    
    printf("Enter a character: ");
    scanf("%c", &input_char);
    
    int result = check_character(input_char);
    printf("%d\n", result);
    
    return 0;
}

