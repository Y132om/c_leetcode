#include <stdio.h>
#include "1.two_number_sum/two_number_sum.h"
int main() {

    int nums[4]={2,7,11,15};
    two_number_sum(9,nums, sizeof(nums)/ sizeof(int));
    return 0;
}