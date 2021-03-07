#include <Arduino.h>
#include "state_machine.h"

state state_machine::run(state state) {
    switch (state) {
        case IDLE:
            if (digitalRead(digital_io_pins::bottle_sensor_input_pin) == HIGH &&
                digitalRead(digital_io_pins::filling_level_sensor_input_pin) == HIGH)
            {
                return FILLED;
            }
            if (digitalRead(digital_io_pins::bottle_sensor_input_pin) == HIGH)
            {
                delay(1000);
                return FILLING;
            }
            return IDLE;
        case FILLING:
            digitalWrite(digital_io_pins::solenoid_value_output_pin, HIGH);
            if (digitalRead(digital_io_pins::filling_level_sensor_input_pin) == HIGH)
            {
                return FILLED;
            }
            if (digitalRead(digital_io_pins::bottle_sensor_input_pin) == LOW)
            {
                return IDLE;
            }
            return FILLING;
        case FILLED:
            digitalWrite(digital_io_pins::solenoid_value_output_pin, LOW);
            if (digitalRead(digital_io_pins::bottle_sensor_input_pin) == LOW &&
                digitalRead(digital_io_pins::filling_level_sensor_input_pin) == LOW)
            {
                delay(1000);
                return IDLE;
            }
            return FILLED;
        default:
            return IDLE;
    }
}
