#include <Arduino.h>
#include <state.h>
#include <state_machine.h>
#include "digital_io_pins.h"

state state;
state_machine state_machine;
digital_io_pins digital_io_pins;

void setup() {
    state = IDLE;
    digital_io_pins.initialize_output_pin_to_low(digital_io_pins.solenoid_value_output_pin);
    digital_io_pins.initialize_input_pin_to_low(digital_io_pins.filling_level_sensor_input_pin);
    digital_io_pins.initialize_input_pin_to_low(digital_io_pins.bottle_sensor_input_pin);
}

void loop() {
    state = state_machine.run(state);
}