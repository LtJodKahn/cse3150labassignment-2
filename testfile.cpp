
#include <stdio.h>
#include <stdlib.h>
#include "Weekassignment_2.h"


int main()
{
    int nums_0[] = {};
    int nums_1[] = {-5};
    int nums_2[] = {35};
    int nums_3[] = {2,-3,3,2};
    int nums_4[] = {1,1,-1,1};
    int nums_5[] = {-1,-1,-1,-1,1,1};

//This section is for testing if non_pos_sum works. If it returns 1, it is true. If it returns 0, it is false.
    printf("nums_1, returns %d \n", non_positive_sum(nums_1, 1));
    printf("nums_0, returns %d \n", non_positive_sum(nums_0, 0));
    printf("nums_2, returns %d \n", non_positive_sum(nums_2, 1));
    printf("nums_3, returns %d \n", non_positive_sum(nums_3, 4));
    printf("nums_4, returns %d \n", non_positive_sum(nums_4, 4));
    printf("nums_5, returns %d \n", non_positive_sum(nums_5, 6));
    
//This section is for testing if non_neg works. If it returns 1, it is true. If it returns 0, it is false.
    printf("We are now here to see if non_negative_sum works \n");
    printf("nums_1, returns %d \n", non_negative_sum(nums_1, 1));
    printf("nums_0, returns %d \n", non_negative_sum(nums_0, 0));
    printf("nums_2, returns %d \n", non_negative_sum(nums_2, 1));
    printf("nums_3, returns %d \n", non_negative_sum(nums_3, 4));
    printf("nums_4, returns %d \n", non_negative_sum(nums_4, 4));
    printf("nums_5, returns %d \n", non_negative_sum(nums_5, 6));
}