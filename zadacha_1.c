#include <stdio.h>

int main() {
    int red_balls[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int size = sizeof(red_balls) / sizeof(red_balls[0]);
    printf("В коробке red_balls помещается %d красных шариков.\n", size);
    return 0;
}