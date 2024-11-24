#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("Nhap so c : ");
    scanf("%d", &c);

    if (a > b) {
    int n = a;
        a = b;
        b = n;
    }

    if (a > c) {
    int n = a;
        a = c;
        c = n;
    }

    if (b > c) {
    int n = b;
        b = c;
        c = n;
    }

    printf("cac so theo thu tu tu be den lon la : %d, %d, %d\n", a, b, c);

    return 0;
}
