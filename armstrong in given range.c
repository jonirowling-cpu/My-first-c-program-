#include <stdio.h>

int main() {
    int low, high, num, temp, r, sum;

    printf("Enter low range:\n");
    scanf("%d", &low);

    printf("Enter high range:\n");
    scanf("%d", &high);

    printf("Armstrong numbers from given range:\n");

    for (num = low; num <= high; num++) {
        temp = num;
        sum = 0;

        while (temp != 0) {
            r = temp % 10;
            sum = sum + (r * r * r);
            temp = temp / 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}