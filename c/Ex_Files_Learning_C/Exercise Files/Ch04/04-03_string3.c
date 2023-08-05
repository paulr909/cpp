#include <stdio.h>
#include <string.h>

int main() {
    char first[] = "I would like to go ";
    char second[] = "from here to there\n";

    printf("%s\n", strcat(first, second));

    return (0);
}
