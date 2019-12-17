#include <stddef.h>
#include <stdlib.h>

unsigned int *fibonacci(size_t n)
{
    unsigned int *arr;
    arr = (unsigned int*)malloc(n*sizeof(unsigned int));    // Remember the callee to free it

    if(n == 0) {
        return NULL;
    } else if(n == 1) {
        arr[0]=0;
        return arr;
    } else if(n == 2) {
        arr[0]=0;
        arr[1]=1;
        return arr;
    } else {
        size_t i;
        
        arr[0]=0;
        arr[1]=1;

        for(i = 2; i < n; ++i) {            // Array indexing seems more idiomatic
            arr[i] = arr[i-1] + arr[i-2];
        }      
            
        return arr;
    }
}
