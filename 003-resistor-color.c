#include <stdio.h>
#include <stdlib.h>

typedef enum {
    BLACK = 0,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} resistor_band_t;

char * getColorName(resistor_band_t color) {
    switch (color) {
        case BLACK: return "BLACK";
        case BROWN: return "BROWN";
        case RED: return "RED";
        case ORANGE: return "ORANGE";
        case YELLOW: return "YELLOW";
        case GREEN: return "GREEN";
        case BLUE: return "BLUE";
        case VIOLET: return "VIOLET";
        case GREY: return "GREY";
        case WHITE: return "WHITE";
        default: return "No Color";
    }
}

resistor_band_t color_code (resistor_band_t color) {
    // Get the color Name
    printf("the main color is: %s\n", getColorName(color));

    // Finding the equivalent index in the enum
    printf("The index for the color is %d\n", color);

    return color;
}

char * colors() {
    printf("------------------------- \n");
    char * color_list[10];

    for (resistor_band_t color = 0; color < 10; color++) {
        color_list[color] = getColorName(color);
        printf("color_list: %s\n", color_list[color]);
    }

    return * color_list;
}

int main () {
    color_code(GREEN);
    colors();
    return 0;
}