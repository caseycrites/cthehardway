#include <stdio.h>

int main(int argc, char *argv[]) {
    char full_name[] = {
        'C', 'a', 's', 'e', 'y',
        ' ', 'W', '.', ' ',
        'C', 'r', 'i', 't', 'e', 's', '\0'
    };
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Casey";

    areas[0] = 100;
    name[3] = 'Y';
    full_name[8] = 'H';
    areas[3] = name[4];

    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);

    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n", sizeof(name));
    printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
    printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));

    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}
