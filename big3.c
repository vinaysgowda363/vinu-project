void biggest3()
{

#include <stdio.h>

int main() {`
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Biggest number is: %d", a);
    } else if (b >= a && b >= c) {
        printf("Biggest number is: %d", b);
    } else {
        printf("Biggest number is: %d", c);
    }

    return 0;
}
