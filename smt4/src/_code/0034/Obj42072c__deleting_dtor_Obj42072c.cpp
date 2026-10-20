#include "classes/Obj42072c.h"

/* Resets the state and frees the two buffers. */
Obj42072c::~Obj42072c()
{
    state.reset();
    asdMemFree(buffer08);
    asdMemFree(buffer0C);
}
