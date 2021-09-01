#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void fibonacci(unsigned int arr[], size_t n)
{
    if (n == 0) {
        return;
    } else if (n == 1) {
        arr[0] = 0;
        return;
    }

    arr[0] = 0;
    arr[1] = 1;

    size_t i;
    for (i = 2; i < n % 2 + 2; ++i) {   // K = 2
        arr[i] = arr[i-1] + arr[i-2];
    }
    for (; i < n; i+=2) {
        arr[i] = arr[i-1] + arr[i-2];
        arr[i+1] = arr[i] + arr[i-1];
    }
}

int main(void)
{
    unsigned int *arr;
    size_t n;

    puts("How many numbers do you want (N)?");
    scanf("%u", &n);
    
    if(n == 0) 
    {
    putchar('\n');
    fflush(stdin);
    puts("Press ENTER to continue ... ");
        getchar();
        return EXIT_SUCCESS;
    }
    
    arr = (unsigned int*)malloc(n*sizeof(unsigned int));

    if(arr == NULL) 
    {
        return EXIT_FAILURE;
    }

    fibonacci(arr, n);

    size_t i;
    for(i = 0; i < n-1; ++i) 
    {
        printf("%u, ", arr[i]);
    }

    printf("%u", arr[i]);
    
    free(arr);

    printf("\n\n");
    
    fflush(stdin);
    
    puts("Press ENTER to continue ... ");
    getchar();
    
    return EXIT_SUCCESS;
}
