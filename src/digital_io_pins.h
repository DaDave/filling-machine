#include <Arduino.h>
#ifndef FILLING_MACHINE_DIGITAL_IO_PINS_H
#define FILLING_MACHINE_DIGITAL_IO_PINS_H


class digital_io_pins {

public:
    static const int solenoid_value_output_pin = 3;
    static const int filling_level_sensor_input_pin = 4;
    static const int bottle_sensor_input_pin = 5;
    void initialize_input_pin_to_low(int pin);
    void initialize_output_pin_to_low(int pin);
};


#endif
