#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to GarbageOS!\n");
    print_set_color(PRINT_COLOR_BLUE, PRINT_COLOR_BLACK);
    print_str("Not very good is it?\n");
    print_set_color(PRINT_COLOR_BROWN, PRINT_COLOR_BLACK);
    print_str("It is called 'GarbageOS' So yea...\n");
}
