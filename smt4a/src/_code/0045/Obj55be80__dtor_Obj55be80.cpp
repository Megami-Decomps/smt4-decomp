/* NON_MATCHING: register allocation only: in the inlined slot clear retail addresses the word tables through ip and the pairs through r4; the build swaps them. */
#include "classes/Obj55be80.h"

/* Clears the active slots and releases the resource word. */
Obj55be80::~Obj55be80()
{
    clearSlots();
    if (resource != 0) {
        resource = 0;
    }
}
