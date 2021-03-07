#include "digital_io_pins.h"

void digital_io_pins::initialize_input_pin_to_low(int pin) {
    pinMode(pin, INPUT);
    digitalWrite(pin, LOW);
}

void digital_io_pins::initialize_output_pin_to_low(int pin) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
}
