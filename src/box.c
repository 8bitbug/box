#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int height;
    int width;
} Box;

Box get_size(void) {
    Box box;
    int height;
    int width;

    do {
        printf("Height: ");
        scanf("%d", &height);
        printf("Width: ");
        scanf("%d", &width);
    } while (height <= 0 || width <= 0);

    box.height = height;
    box.width = width;

    return box;
}

void print_bricks(int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("#");
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        Box box = get_size();
        print_bricks(box.height, box.width);
        return 0;
    }

    const int height = atoi(argv[1]);
    const int width = atoi(argv[2]);

    Box box;

    box.height = height;
    box.width = width;

    print_bricks(box.height, box.width);
}
