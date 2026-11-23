#include "classes/Obj4222ac.h"

// Clear the active flag and reset the position.
extern "C" void _ZN9Obj4222ac13resetPositionEv(Obj4222ac *self)
{
    self->flags &= ~1u;
    self->position.x = 0;
    self->position.y = 0;
    self->position.z = 0;
}
