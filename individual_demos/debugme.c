#include <stdio.h>

int count = 0;

double square(double d) {
    ++count; // update global value
    return d * d;
}

double sum_up(double *nums, size_t len) {
    double sum = 0;
    for (int i = 0; i < len; ++i) {
        sum += square(nums[i]);
    }
    return sum;
}

int main(int argc, char **argv) {

    double nums[] = { 3, 5, 7 };

    puts("Calling sum_up...");
    double result = sum_up(nums, sizeof(nums)/sizeof(nums[0]));
    printf("sum = %lf\n", result);
    return 0;
}

