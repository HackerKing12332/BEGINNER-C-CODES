#include <stdio.h>

int main() {
    int l, r, k;
    printf("Enter the range [l, r]: ");
    scanf("%d %d", &l, &r);
    printf("Enter the base k: ");
    scanf("%d", &k);

    printf("Powers of %d in the range [%d, %d]:\n", k, l, r);
    for (int i = 0; i <= (r / k); i++) {
        int power = k * i;
        if (power >= l && power <= r) {
            printf("%d\n", power);
        }
    }

    return 0;
}