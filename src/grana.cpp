// grana
// v0.0.1-alpha
// serrano, montoya

#include <stdio.h>

int main() {
    init_grana();
}

void update_grana() {
    read_potentiometers();
    read_buttons();
    update_leds();
    update_booleans();
}

