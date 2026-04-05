#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// pseudo random generator
int main() {
    int count, i;

    printf("Enter how many random numbers you want: ");
    scanf("%d", &count);

    srand(time(NULL));

    printf("Pseudo Random Numbers:\n");
    for (i = 0; i < count; i++) {
        printf("%d\n", rand());
    }

    // seed based generation
    return 0;
}
// made by abhinav
