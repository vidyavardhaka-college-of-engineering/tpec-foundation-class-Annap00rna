#include <stdio.h>
#include <string.h>

int main() {
    char data_type[10];
    
    printf("Enter a data type (Integer, Long, Float, Double, Character): ");
    scanf("%s", data_type);
    
    if (strcmp(data_type, "Integer") == 0) {
        printf("4\n");
    } else if (strcmp(data_type, "Long") == 0) {
        printf("8\n");
    } else if (strcmp(data_type, "Float") == 0) {
        printf("4\n");
    } else if (strcmp(data_type, "Double") == 0) {
        printf("8\n");
    } else if (strcmp(data_type, "Character") == 0) {
        printf("1\n");
    } else {
        printf("Unknown data type\n");
    }
    
    return 0;
}

