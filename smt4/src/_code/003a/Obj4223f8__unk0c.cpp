#include "classes/Obj4223f8.h"

/* Runs the state handler of the current step, when it has one. */
void Obj4223f8::unk0c()
{
    if (handlers[0][step] != NULL) {
        (this->*handlers[0][step])();
    }
}
