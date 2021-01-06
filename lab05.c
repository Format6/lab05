#include <stdio.h>

int main()
{
    int a, b, i;
    int div1, div2, div3;
    a = 55;
    b = 50;

    if (b > a) {
        int temp = b;
        b = a;
        a = temp;
    }

    int x = 1;
    int y = 1;

    for (i = 1; i <= a && i <= b; ++i) {

        if (a % i == 0 && b % i == 0) {
            div1 = i;
        }

    }

    do {
        if (a % x == 0 && b % x == 0) {
            div2 = x;
        }
        x++;
    } while (x < b);

    while (y < b) {
        if (a % j == 0 && b % j == 0) {
            div3 = y;
        }
        y++;
    }

    return 0;
}
