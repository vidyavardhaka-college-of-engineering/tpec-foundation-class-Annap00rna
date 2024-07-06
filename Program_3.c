#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    int ch;
    printf("Enter your choice (1 for Circle, 2 for Rectangle): ");
    scanf("%d", &ch);
    
    switch (ch) {
        case 1: {
            double r, area;
            printf("Enter the radius of the circle: ");
            scanf("%lf", &r);
            area = PI * r * r;
            printf("area = %.2lf\n", area);
            break;
        }
        case 2: {
            double l, b, area;
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%lf %lf", &l, &b);
            area = l * b;
            printf("area = %.2lf\n", area);
            break;
        }
        default:
            printf("Invalid choice\n");
            break;
    }
    
    return 0;
}

