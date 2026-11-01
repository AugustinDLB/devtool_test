#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    time_t now = time(NULL);

    printf("================================\n");
    printf(" Hello from my Yocto application!\n");
    printf("================================\n");

    printf("Current timestamp: %ld\n", (long)now);
    printf("Application successfully started.\n");

    return EXIT_SUCCESS;
}
