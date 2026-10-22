#include "classes/Obj4222ac.h"

// Clear the active flag and reset the position.
extern "C" void _ZN9Obj4222ac13resetPositionEv(Obj4222ac *self)
{
    self->flags &= ~1u;
    self->position[0] = 0;
    self->position[1] = 0;
    self->position[2] = 0;
}
