#include <stdio.h>

int main() {
    int num = 50;
    float num2 = 45.45f;
    char ch = 'R';
    printf("%d\n", num);
    printf("%f\n", num2);
    printf("%c\n", ch);

    num = num2;
    printf("%d\n", num);
    return 0;
}