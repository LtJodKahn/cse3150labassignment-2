#include <stdio.h>
#include <stdlib.h>
#include "Weekassignment_2.h"



int prefix_sum(int array[], int length){
    int prefsumres = 0;
    for(int i = 0; i < length; i++){
        prefsumres = prefsumres + array[i];
    }
    return prefsumres;
}

bool non_negative_sum(int array[], int length){
    int dumb_array[] = {};
    if(prefix_sum(array, length) >= 0){
        return 2 == 2;
    }
    else if(prefix_sum(array, length) < 0){
        return 2 == 3;
    }
    else if(array == dumb_array){
        return false;
    }
}

bool non_positive_sum(int array[], int length){
    int dumb_array[] = {};
    if(prefix_sum(array, length) <= 0){
        return true;
    }
    else if(prefix_sum(array, length) > 0){
        return false;
    }
    else if(array = dumb_array){
        return false;
    }
    
}

