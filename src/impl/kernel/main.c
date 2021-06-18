#include <print.h>

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to GarbageOS!\n");
    print_set_color(PRINT_COLOR_BLUE, PRINT_COLOR_BLACK);
    print_str("Not very good is it?\n");
    print_set_color(PRINT_COLOR_BROWN, PRINT_COLOR_BLACK);
    print_str("It is called 'GarbageOS' So yeah...\n");
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLUE);
    print_str("Welp there is an update of adding GUIS to this trash (im currently working on it!)");
}
