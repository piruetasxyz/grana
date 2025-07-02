// grana
// v0.0.1-alpha
// serrano, montoya

// import libraries
#include <stdio.h>
#include "pico/stdlib.h"

class Grana {
public:
    // constructor
    Grana() {
        // initialize object
        init_grana();
    }

    // update grana states
    void update_grana() {
        read_potentiometers();
        read_pushbuttons();
        update_leds();
    }


private:
    // method to initialize grana
    void init_grana() {
        // initialization code here
    }

    // Method to read potentiometers
    void read_potentiometers() {
    }

    // Method to read buttons
    void read_pushbuttons() {
    }

    // Method to update LEDs
    void update_leds() {
    }
};
