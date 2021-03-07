#include <state.h>
#include "digital_io_pins.h"

#ifndef FILLING_MACHINE_STATEMACHINE_H
#define FILLING_MACHINE_STATEMACHINE_H


class state_machine {
public:
    static state run(state state);
};


#endif
