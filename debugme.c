#include <stdio.h>

double sumup(double *nums, size_t len) {
    double sum = 0;
    for (int i = 0; i < len; ++i) {
        sum += nums[i];
    }
    return sum;
}

int main(int argc, char **argv) {

    double nums[] = { 3, 5, 7 };

    double result = sumup(nums, sizeof(nums)/sizeof(nums[0]));
    printf("sum = %lf\n", result);
    return 0;
}

