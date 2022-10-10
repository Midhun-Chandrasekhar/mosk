#include "print.h"

void print_line(){
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
    print_str("**************************************");
    print_str("\n");
}

void print_head(){
    print_line();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("********** M O S Kernal **************\n");
    print_line();
}

void print_info(){
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
    print_str("\n \n");

    print_str("Version: 0.1.0 \n");
    print_str("Arch:    x86 \n");

    print_str("\n \n");

    print_str("Auther:  Midhun Chandrasekhar \n");
    print_str("Place:   India \n");
    print_str("Date:    10 October 2022 \n");
}

void print_footer(){
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("\n \n");

    print_str("Thank you for using MOSK \n");
    print_str("Send your feedback to: \n");
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("csekhar.jr@gmail.com");
}

void kernel_main() {
    print_clear();
    print_head();
    print_info();
    print_footer();
}
